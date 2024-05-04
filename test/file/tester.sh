#!/usr/bin/bash

dirname="file"

CD "$PWD"

# Vérifie si le répertoire existe
if [ ! -d "src/$dirname" ]; then
	echo "Le répertoire spécifié n'existe pas."
	exit 1
fi

count=1
allFiles=""
return_code=0
total=$(find "test/$dirname/files" -maxdepth 1 -type f | wc -l)
total=$((total + 1)) # +1 for bonus

gcc -Wall -Wextra -Werror libft.a test/$dirname/get_next_line_test.c -o tester

# Files Source: https://github.com/Tripouille/gnlTester
for file in test/$dirname/files/*; do
	if [ -f "$file" ]; then
		filename=$(basename "$file")

		allFiles+="$file "

		echo -e "\nTest ["$count"/"$total"]: \033[0;33m"$filename"\033[0;37m\n"

		((count++))

		cat "$file" | ./tester > output
		if diff --brief output "$file" > /dev/null; then
			echo -e "\033[0;32mOK\033[0;37m"
		else
			diff -U 3 output "$file" | cat -e
			echo -e "\033[0;31mKO\033[0;37m"
			return_code=1
		fi
	fi
done

# helper function to test for existance of node
function HAS_NODE {
  if [ -x "$(command -v node)" ]; then return 0; else return 1; fi
}

echo -e "\nTest ["$count"/"$total"]: \033[0;33mbonus - multiple fds\033[0;37m\n"

if HAS_NODE; then
	: # node is installed, we can continue :)
else
	echo -e "\033[1;35mNode.JS not installed, skipping bonus test!\033[0;37m\n"
	exit 0
fi

node test/$dirname/bonus-script.js

./tester $allFiles > output
if diff --brief output test/$dirname/bonus > /dev/null; then
	echo -e "\033[0;32mOK\033[0;37m"
else
	diff -U 3 output test/$dirname/bonus | cat -e
	echo -e "\033[0;31mKO\033[0;37m"
	return_code=1
fi

rm tester output test/$dirname/bonus

exit $return_code
