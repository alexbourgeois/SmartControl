all :
	java -jar PlantUML/plantuml.jar -charset UTF-8 ./images/*.txt
	pdflatex *.tex
	rm *.aux *.log *.maf *.out *.mtc0 *.mtc
	mv *.pdf pdf/
