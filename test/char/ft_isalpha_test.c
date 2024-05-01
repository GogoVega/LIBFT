#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with alphabets
	if (ft_isalpha('A') && ft_isalpha('Z') && ft_isalpha('a') && ft_isalpha('z')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Testing with non-alphabetic characters
	if (!ft_isalpha('@') && !ft_isalpha('[') && !ft_isalpha('`') && !ft_isalpha('{') && !ft_isalpha('0') && !ft_isalpha(' ')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Testing with special characters
	if (!ft_isalpha('\n') && !ft_isalpha('\t') && !ft_isalpha('\0') && !ft_isalpha(31) && !ft_isalpha(127)) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
