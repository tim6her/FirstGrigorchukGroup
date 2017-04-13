# make              : builds all pdf files
# make clean        : latexmk's cleanup (keep pdf)
# make distclean    : latexmk's full clean and git's clean (if available)
# make cont quiz01  : opens quiz01.tex in ${EDITOR} (default is gedit) and latexmk in continous build mode
#                     if latexmk opens up the wrong pdf previewer:
#                     > cat ~/.latexmkrc
#                     $pdf_previewer = "start evince";
#                     $pdf_update_method = 0;


EDITOR   ?= mate
TEXFILES := $(wildcard *.tex)
PDFFILES := $(TEXFILES:.tex=.pdf)

# $(info ${PDFFILES})

.PHONY = all clean distclean cont show

all: ${PDFFILES}

%.pdf: %.tex
	latexmk -pdf -xelatex $<

clean:
	latexmk -c
	-$(RM) *~

distclean:
	latexmk -C
	-git clean -fdX .

show:
	$(eval FILE := $(filter-out $@,$(MAKECMDGOALS)))
	$(MAKE) ${FILE}.pdf
	xdg-open ${FILE}.pdf

# continuous mode
cont:
	$(eval FILE := $(filter-out $@,$(MAKECMDGOALS)))
	${EDITOR} ${FILE}.tex &
	latexmk -pdf -pdflatex='pdflatex -interaction=nonstopmode' -pvc ${FILE}.tex
