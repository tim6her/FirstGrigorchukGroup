pdf:
	pandoc -t beamer --biblio References.bib --slide-level 2 presentation.md -o index.tex
	latexmk -xelatex BurnsidesProblem.tex

revealjs:
	pandoc -t revealjs -s --biblio References.bib --mathjax -V theme:metropolis preambula.md presentation.md -o index.html

tex:
	pandoc -t beamer --biblio References.bib --slide-level 2 presentation.md -o index.tex