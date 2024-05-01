#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char str1[] = "Hello, world!";
	unsigned int start1 = 7;
	size_t len1 = 5;
	char *result1 = ft_substr(str1, start1, len1);
	if (result1 != NULL && strcmp(result1, "world") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result1);

	char str2[] = "This is a test";
	unsigned int start2 = 0;
	size_t len2 = 15;
	char *result2 = ft_substr(str2, start2, len2);
	if (result2 != NULL && strcmp(result2, "This is a test") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result2);

	char str3[] = "Hello, world!";
	unsigned int start3 = 13;
	size_t len3 = 10;
	char *result3 = ft_substr(str3, start3, len3);
	if (result3 != NULL && strcmp(result3, "\0") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result3);

	char str4[] = "Hello, world!";
	unsigned int start4 = 20;
	size_t len4 = 5;
	char *result4 = ft_substr(str4, start4, len4);
	if (result4 != NULL && strcmp(result4, "\0") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result4);

	char str5[] = "";
	unsigned int start5 = 0;
	size_t len5 = 5;
	char *result5 = ft_substr(str5, start5, len5);
	if (result5 != NULL && strcmp(result5, "") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result5);

	return (exit_code);
}
