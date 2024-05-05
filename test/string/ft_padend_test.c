#include "../test_helper.h"

int main()
{
	int exit_code = 0;

	// Test Case 1: Pad with '!' to length 10
	char str1[] = "Hello";
	char c1 = '!';
	size_t len1 = 10;
	char *result1 = ft_padend(str1, c1, len1);
	if (result1 != NULL && strcmp(result1, "Hello!!!!!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result1);

	// Test Case 2: Pad with '0' to length 5
	char str2[] = "123";
	char c2 = '0';
	size_t len2 = 5;
	char *result2 = ft_padend(str2, c2, len2);
	if (result2 != NULL && strcmp(result2, "12300") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result2);

	// Test Case 3: Pad with ' ' to length 8
	char str3[] = "Hello";
	char c3 = ' ';
	size_t len3 = 8;
	char *result3 = ft_padend(str3, c3, len3);
	if (result3 != NULL && strcmp(result3, "Hello   ") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result3);

	// Test Case 4: Pad with '\0' to length 3
	char str4[] = "Hello";
	char c4 = '\0';
	size_t len4 = 3;
	char *result4 = ft_padend(str4, c4, len4);
	if (result4 != NULL && strcmp(result4, "Hello") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result4);

	// Test Case 5: Pad with '$' to length 0
	char str5[] = "";
	char c5 = '$';
	size_t len5 = 0;
	char *result5 = ft_padend(str5, c5, len5);
	if (result5 != NULL && strcmp(result5, "") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result5);

	return (exit_code);
}
