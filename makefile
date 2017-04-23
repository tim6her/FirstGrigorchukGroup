pdf:
	pandoc -t beamer --biblio References.bib --slide-level 2 --filter pandoc-crossref --filter unfragment presentation.md -o index.tex
	sed -i -e 's/.svg}/}/g' index.tex
	latexmk -xelatex FirstGrigorchukGroup.tex

revealjs:
	pandoc -t revealjs -s -f markdown+footnotes --biblio References.bib --mathjax --filter pandoc-crossref -V theme:metropolis preambula.md presentation.md -o docs/index.html

history:
	pandoc -t revealjs -s --biblio References.bib --mathjax --filter pandoc-crossref -V theme:metropolis preambula.md history.md -o docs/history.html