#include "../test_helper.h"
#include <string.h>

int main()
{
	int	exit_code = 0;

	char str1[] = "Hello, World!";
	char str2[] = "This is a test";
	char str3[] = "Another test";
	char str4[] = "1234567890";
	char str5[] = "";

	char *result = ft_strchr(str1, 'o');
	if (result == strchr(str1, 'o')) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_strchr(str2, 't');
	if (result == strchr(str2, 't')) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_strchr(str3, 'z');
	if (result == strchr(str3, 'z')) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_strchr(str4, '0');
	if (result == strchr(str4, '0')) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_strchr(str5, '\0');
	if (result == strchr(str5, '\0')) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}