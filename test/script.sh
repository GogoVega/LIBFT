#!/usr/bin/bash

CD "$PWD"

echo -e "\n\033[0;36mWelcome in LIBFT Tester Script\033[0m\n"

exit_code=0

# Trouver tous les scripts de test dans le répertoire et les exécuter
for file in test/**/tester.sh; do
	if [ -f "$file" ]; then
		dirname=$(basename $(dirname "$file"))
		length=$(( (78 - ${#dirname}) / 2 ))

		echo -e "\n$(printf '═%.0s' $(seq $length)) $(printf '%s' "$dirname" | awk '{ print toupper($0) }') $(printf '═%.0s' $(seq $(( ${#dirname} % 2 ? $((length + 1)) : $length ))))\n"

		# Lancer le script
		bash "$file"

		if [ $? -gt 0 ]; then
			exit_code=1
		fi
	fi
done

# Print the result
echo -e "\n\033[0;36m"
echo -e "╔══════════════════════════════════════════════════════════════════════════════╗"

if [ $exit_code -eq 0 ]; then
	echo -e "║                 🎉🥳 \033[0;32mAll tests passed! Congratulations!\033[0;36m 🥳🎉                 ║"
else
	echo -e "║          🚨⚠️ \033[0;31mSome tests failed, give it another try you should.\033[0;36m ⚠️🚨          ║"
fi

echo -e "╚══════════════════════════════════════════════════════════════════════════════╝"

echo -e "\n\033[0;36mEnd of LIBFT Tester Script\033[0m"

exit $exit_code
