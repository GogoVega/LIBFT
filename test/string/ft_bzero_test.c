#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char str1[] = "Hello";
	ft_bzero(str1, 5);
	if (strcmp(str1, "\0\0\0\0\0") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	char str2[] = "Test";
	ft_bzero(str2, 0);
	if (strcmp(str2, "Test") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
