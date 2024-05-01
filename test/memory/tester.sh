#!/usr/bin/bash

dirname="memory"

CD "$PWD"

# Vérifie si le répertoire existe
if [ ! -d "src/$dirname" ]; then
	echo "Le répertoire spécifié n'existe pas."
	exit 1
fi

count=1
total=$(find "test/$dirname" -name "*.c" -maxdepth 1 -type f | wc -l)
return_code=0

# Trouver tous les fichiers .c dans le répertoire de test et les exécuter
for file in test/$dirname/*_test.c; do
	if [ -f "$file" ]; then
		filename=$(basename "$file")
		testname=${filename%_test.c}

		echo -e "\nTest ["$count"/"$total"]: \033[0;33m"$testname"\033[0;37m\n"

		((count++))

		gcc -Wall -Wextra -Werror libft.a "$file" -o tester && ./tester
		if [ $? -gt 0 ]; then
			return_code=1
		fi
	fi
done

rm tester

exit $return_code
