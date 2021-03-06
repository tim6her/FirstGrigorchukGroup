\documentclass[]{standalone}

\usepackage{fontspec}
\setsansfont[Numbers=Lining]{EB Garamond}

\usepackage{amsmath}
\DeclareMathOperator{\id}{id}
\renewcommand{\T}{T^{(2)}}
\newcommand{\ST}[1]{\T_{#1}}

\usepackage[dvipsnames, cmyk]{xcolor}
\usepackage{tikz}
\usepackage{pgfcore}
\usetikzlibrary{arrows}

\usepackage{xcolor}
\definecolor{verysoftblue}{HTML}{88CCEE}
\definecolor{darkblue}{HTML}{332288}
\definecolor{darkmoderatecyan}{HTML}{44AA99}
\definecolor{darkcyan}{HTML}{117777}
\definecolor{softyellow}{HTML}{DDCC77}
\definecolor{darkmoderatemagenta}{HTML}{AA4499}
\definecolor{darkpink}{HTML}{882255}
\definecolor{moderatered}{HTML}{CC6677}
\definecolor{verymoderatered}{HTML}{FF99AA}
\definecolor{darkred}{HTML}{AE1C3E}
\definecolor{mDarkTeal}{HTML}{23373b}
%\definecolor{mLightBrown}{HTML}{EB811B}

\colorlet{cLines}{mDarkTeal}
\colorlet{cHighlight}{darkred}
\colorlet{cLeft}{verysoftblue}

\tikzstyle{every node}=[circle,draw=cLines,font=\small,text=cLines,inner sep=1pt, minimum size=5mm, very thick]
\tikzstyle{edge from parent}=[draw=cLines, very thick]
\tikzstyle{st}=[cLeft, line join=round, line width=2mm]
\tikzstyle{st1}=[cLeft!60!white, line join=round, line width=1mm]

\tikzstyle{bgn}=[node distance=6mm, font=normal]
\tikzstyle{hlarrow}=[stealth-stealth, shorten <=1pt, shorten >=1pt, draw=cHighlight, line width=2.5pt]
\tikzstyle{walk}=[line width=5pt, line join=round, triangle 90  cap reversed-stealth, draw=cHighlight]
\tikzstyle{highlight}=[draw=cHighlight, line width=3pt]

\tikzstyle{level 1}=[sibling distance=60mm]
\tikzstyle{level 2}=[sibling distance=30mm]
\tikzstyle{level 3}=[sibling distance=15mm]
\tikzstyle{level 4}=[sibling distance=7.5mm]
\tikzstyle{level 5}=[sibling distance=3.75mm, level distance=5mm]

\begin{document}%
\pgfdeclarelayer{background}%
\pgfsetlayers{background,main}%
