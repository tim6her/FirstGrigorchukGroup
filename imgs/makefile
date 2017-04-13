all:
	latexmk -xelatex *.tex
	bash pdf2svg.sh
	mv *.pdf ../res/
	mv *.svg ../res/

pdf:
	latexmk -xelatex *.tex
