#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test Case 1: Trim leading and trailing spaces
	char str1[] = "   Hello, world!   ";
	char set1[] = " ";
	char *result1 = ft_strtrim(str1, set1);
	if (strcmp(result1, "Hello, world!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test Case 2: Trim leading and trailing characters from set
	char str2[] = "###This is a test###";
	char set2[] = "#";
	char *result2 = ft_strtrim(str2, set2);
	if (strcmp(result2, "This is a test") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test Case 3: Empty string
	char str3[] = "";
	char set3[] = " ";
	char *result3 = ft_strtrim(str3, set3);
	if (strcmp(result3, "") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test Case 4: No trimming required
	char str4[] = "No trimming required";
	char set4[] = " ";
	char *result4 = ft_strtrim(str4, set4);
	if (strcmp(result4, "No trimming required") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
