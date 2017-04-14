all:
	latexmk -xelatex *.tex
	bash pdf2svg.sh
	mv *.pdf ../res/
	mv *.svg ../docs/res/

pdf:
	latexmk -xelatex *.tex
