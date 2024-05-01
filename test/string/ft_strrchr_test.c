#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char str1[] = "Hello, world!";
	char c1 = 'o';
	char *result1 = ft_strrchr(str1, c1);
	if (result1 != NULL && strcmp(result1, "orld!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	char str2[] = "This is a test";
	char c2 = 't';
	char *result2 = ft_strrchr(str2, c2);
	if (result2 != NULL && strcmp(result2, "t") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	char str3[] = "Hello, world!";
	char c3 = 'z';
	char *result3 = ft_strrchr(str3, c3);
	if (result3 == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	char str4[] = "";
	char c4 = 'a';
	char *result4 = ft_strrchr(str4, c4);
	if (result4 == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	char str5[] = "Hello";
	char c5 = '\0';
	char *result5 = strrchr(str5, c5);
	if (result5 != NULL && strcmp(result5, "\0") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
