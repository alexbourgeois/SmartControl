#include "frame3d.h"

Frame3D::Frame3D()
{
    connect(&view, SIGNAL(calibrate()), this, SLOT(calibrate()));
    calibratedX = 0;
    calibratedY = 0;
    calibratedZ = 0;

    engine.registerAspect(new Qt3DRender::QRenderAspect());
    input = new Qt3DInput::QInputAspect;
    engine.registerAspect(input);

    data.insert(QStringLiteral("surface"), QVariant::fromValue(static_cast<QSurface *>(&view)));
    data.insert(QStringLiteral("eventSource"), QVariant::fromValue(&view));
    engine.setData(data);

    // Root entity
    rootEntity = new Qt3DCore::QEntity();
    rootEntity->setObjectName(QStringLiteral("rootEntity"));
    // cube
    cubeEntity = new Qt3DCore::QEntity(rootEntity);

    // cube shape data
    cube = new Qt3DRender::QCuboidMesh();

    cubeEntity->addComponent(cube);

    // cubeMesh Transform
    cubeTransforms = new Qt3DCore::QTransform();
    //cubeTransforms->setTranslation(QVector3D(-5.0f, 1.5f, 2.0f));
    cubeTransforms->setTranslation(QVector3D(0.0f, 0.0f, 0.0f));
    cubeTransforms->setRotation(QQuaternion::fromAxisAndAngle(QVector3D(1, 1, 1), 0.0f));
    cubeEntity->addComponent(cubeTransforms);

    // Camera
    cameraEntity = new Qt3DCore::QCamera(rootEntity);
    cameraEntity->setObjectName(QStringLiteral("cameraEntity"));
    cameraEntity->lens()->setPerspectiveProjection(60.0f, 16.0f/9.0f, 0.1f, 1000.0f);
   // cameraEntity->setPosition(QVector3D(-5, 4, 3.5f));
     cameraEntity->setPosition(QVector3D(0, 2, -2.0f));
    //cameraEntity->setViewCenter(QVector3D(11, 0, 5));
    cameraEntity->setViewCenter(cubeTransforms->translation());
    cameraEntity->setUpVector(QVector3D(0, 1, 0));
    input->setCamera(cameraEntity);

    // FrameGraph
    frameGraph = new Qt3DRender::QFrameGraph();
    techniqueFilter = new Qt3DRender::QTechniqueFilter();
    viewport = new Qt3DRender::QViewport(techniqueFilter);
    clearBuffer = new Qt3DRender::QClearBuffer(viewport);
    cameraSelector = new Qt3DRender::QCameraSelector(clearBuffer);
    (void) new Qt3DRender::QRenderPassFilter(cameraSelector);

    // TechiqueFilter and renderPassFilter are not implement yet
    viewport->setRect(QRectF(0, 0, 1, 1));
    clearBuffer->setBuffers(Qt3DRender::QClearBuffer::ColorDepthBuffer);
    cameraSelector->setCamera(cameraEntity);
    frameGraph->setActiveFrameGraph(techniqueFilter);

    // Setting the FrameGraph
    rootEntity->addComponent(frameGraph);

    // Set root object of the scene
    engine.setRootEntity(rootEntity);
    // Show window
    view.show();
}

void Frame3D::calibrate() {
    this->blockSignals(true);
    calibratedX = cubeTransforms->rotationX();
    calibratedY = cubeTransforms->rotationY();
    calibratedZ = cubeTransforms->rotationZ();
    cubeTransforms->setRotationX(0);
    cubeTransforms->setRotationY(0);
    cubeTransforms->setRotationZ(0);
    this->blockSignals(false);
}

void  Frame3D::rotate(float x, float y, float z){
     cubeTransforms->setRotationX(x+calibratedX);
     cubeTransforms->setRotationY(y+calibratedY);
     cubeTransforms->setRotationZ(z+calibratedZ);
}

