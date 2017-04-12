dzslides:
	pandoc -t dzslides -s presentation.md -o index.html

revealjs:
	pandoc -t revealjs -s presentation.md -o index.html
	python -m SimpleHTTPServer 8001