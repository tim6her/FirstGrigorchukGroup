for f in *.pdf; do
    convert ./"$f" ./"${f%.pdf}.svg"
done
