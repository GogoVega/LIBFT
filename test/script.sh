#!/usr/bin/bash

CD "$PWD"

echo -e "\nWelcome in LIBFT Tester Script\n"

exit_code=0

# Trouver tous les scripts de test dans le répertoire et les exécuter
for file in test/**/tester.sh; do
	if [ -f "$file" ]; then
		dirname=$(basename $(dirname "$file"))
		length=$(( (80 - ${#dirname}) / 2 ))

		echo -e "\n$(printf '=%.0s' $(seq $length)) $(printf '%s' "$dirname" | awk '{ print toupper($0) }') $(printf '=%.0s' $(seq $length))\n"

		# Lancer le script
		bash "$file"

		if [ $? -gt 0 ]; then
			exit_code=1
		fi
	fi
done

echo -e "\nEnd of LIBFT Tester Script"

exit $exit_code
