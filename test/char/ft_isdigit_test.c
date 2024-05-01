#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with digits
	if (ft_isdigit('0') && ft_isdigit('5') && ft_isdigit('9')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Testing with alphabets
	if (!ft_isdigit('A') && !ft_isdigit('Z') && !ft_isdigit('a') && !ft_isdigit('z')) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Testing with special characters
	if (!ft_isdigit('/') && !ft_isdigit(':')) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
