find . -name "*.sh" | rev | cut -d / -f -1 | cut -b 4- | rev
