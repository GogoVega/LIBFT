#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char str[10];

	// Test case 1: Fill the string with 'A' for 5 characters
	ft_memset(str, 'A', 5);
	if (strncmp(str, "AAAAA", 5) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Fill the string with '\0' for 10 characters
	ft_memset(str, '\0', 10);
	if (strncmp(str, "\0\0\0\0\0\0\0\0\0\0", 10) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Fill the string with 'B' for 0 characters
	ft_memset(str, 'B', 0);
	if (strncmp(str, "", 0) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
