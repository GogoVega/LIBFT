#!/usr/bin/bash

dirname="print"

CD "$PWD"

# Vérifie si le répertoire existe
if [ ! -d "src/$dirname" ]; then
	echo "Le répertoire spécifié n'existe pas."
	exit 1
fi

count=1
return_code=0
total=$(find "test/$dirname" -name "*.c" -maxdepth 1 -type f | wc -l)

# Test for FT_PRINTF
# Files Source: https://github.com/Tripouille/printfTester
for file in test/$dirname/ft_printf_*_test.c; do
	if [ -f "$file" ]; then
		filename=$(basename "$file")
		testname=${filename%_test.c}

		echo -e "\nTest ["$count"/"$total"]: \033[0;33m"$testname"_format\033[0;37m\n"

		((count++))

		gcc -Wall -Werror -Wextra libft.a "$file" -o tester && ./tester > output

		if diff --brief output "test/$dirname/files/${testname#ft_printf_}_test.txt" > /dev/null; then
			echo -e "\033[0;32mOK\033[0;37m"
		else
			diff -U 3 output "test/$dirname/files/${testname#ft_printf_}_test.txt" | cat -e
			echo -e "\033[0;31mKO\033[0;37m"
			return_code=1
		fi
	fi
done


# Test for FT_PUT...
for file in test/$dirname/ft_put*_test.c; do
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

rm tester output

exit $return_code
