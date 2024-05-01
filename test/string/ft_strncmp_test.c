#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Equal strings
	const char *s1 = "Hello";
	const char *s2 = "Hello";
	int result = ft_strncmp(s1, s2, 5);
	if (result == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Different strings
	s1 = "Hello";
	s2 = "World";
	result = ft_strncmp(s1, s2, 5);
	if (result < 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Partial match
	s1 = "Hello";
	s2 = "Hell";
	result = ft_strncmp(s1, s2, 4);
	if (result == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 4: Empty strings
	s1 = "";
	s2 = "";
	result = ft_strncmp(s1, s2, 0);
	if (result == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
