for f in *.pdf; do
    pdf2svg ./"$f" ./"${f%.pdf}.svg"
done
