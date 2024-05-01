#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with alphabets
	if (ft_isalnum('A') && ft_isalnum('Z') && ft_isalnum('a') && ft_isalnum('z')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Testing with digits
	if (ft_isalnum('0') && ft_isalnum('5') && ft_isalnum('9')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Testing with non-alphabetic characters
	if (!ft_isalnum('@') && !ft_isalnum('[') && !ft_isalnum('`') && !ft_isalnum('{') && !ft_isalnum(' ')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 4: Testing with special characters
	if (!ft_isalnum('\n') && !ft_isalnum('\t') && !ft_isalnum('\0') && !ft_isalnum(31) && !ft_isalnum(127)) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
