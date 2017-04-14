all:
	latexmk -xelatex *.tex
	bash pdf2svg.sh
	cp *.pdf ../res/
	mv *.svg ../docs/res/

pdf:
	latexmk -xelatex *.tex
