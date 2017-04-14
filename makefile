pdf:
	pandoc -t beamer --biblio References.bib --slide-level 2 presentation.md -o index.tex
	sed -i -e 's/.svg}/}/g' index.tex
	latexmk -xelatex FirstGrigorchukGroup.tex

revealjs:
	pandoc -t revealjs -s --biblio References.bib --mathjax -V theme:metropolis preambula.md presentation.md -o docs/index.html

tex:
	pandoc -t beamer --biblio References.bib --slide-level 2 presentation.md -o index.tex