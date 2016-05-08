#ifndef FRAME3D_H
#define FRAME3D_H


#include <Qt3DCore/qcamera.h>
#include <Qt3DCore/qentity.h>
#include <Qt3DCore/qcameralens.h>
#include <Qt3DCore/qaspectengine.h>
#include <Qt3DCore/qtransform.h>

#include <Qt3DInput/QInputAspect>

#include <QCuboidMesh>
#include <Qt3DRender/qmesh.h>
#include <Qt3DRender/qtechnique.h>
#include <Qt3DRender/qmaterial.h>
#include <Qt3DRender/qeffect.h>
#include <Qt3DRender/qtexture.h>
#include <Qt3DRender/qrenderpass.h>
#include <Qt3DRender/qsceneloader.h>
#include <Qt3DRender/qcameraselector.h>
#include <Qt3DRender/qrenderpassfilter.h>
#include <Qt3DRender/qtechniquefilter.h>
#include <Qt3DRender/qviewport.h>
#include <Qt3DRender/qrenderaspect.h>
#include <Qt3DRender/qframegraph.h>
#include <Qt3DRender/qclearbuffer.h>

#include "window.h"

/**
 * @brief The Frame3D class is used to display a 3D cube which is being controled by sensor data
 */
class Frame3D: public QObject
{
    Q_OBJECT

public:
    Frame3D();

public slots:
    void rotate(float x, float y, float z);
    void calibrate();

private:
    Window view;
    Qt3DCore::QAspectEngine engine;
    Qt3DInput::QInputAspect *input;
    QVariantMap data;
    Qt3DCore::QEntity *rootEntity;
    Qt3DCore::QEntity *cubeEntity ;
    Qt3DRender::QCuboidMesh *cube;
    Qt3DCore::QTransform *cubeTransforms;
    Qt3DCore::QCamera *cameraEntity;
    Qt3DRender::QFrameGraph *frameGraph;
    Qt3DRender::QTechniqueFilter *techniqueFilter;
    Qt3DRender::QViewport *viewport;
    Qt3DRender::QClearBuffer *clearBuffer;
    Qt3DRender::QCameraSelector *cameraSelector;

    float calibratedX, calibratedY, calibratedZ;
};

#endif // FRAME3D_H
