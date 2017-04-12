pdf:
	pandoc -t beamer --slide-level 2 presentation.md -o index.tex
	latexmk -xelatex BurnsidesProblem.tex

dzslides:
	pandoc -t dzslides -s --mathjax preambula.md presentation.md -o index.html

revealjs:
	pandoc -t revealjs -s --mathjax preambula.md presentation.md -o index.html
	python -m SimpleHTTPServer 8001

tex:
	pandoc -t beamer --slide-level 2 presentation.md -o index.tex