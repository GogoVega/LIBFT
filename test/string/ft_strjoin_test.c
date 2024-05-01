#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char *result = ft_strjoin("Hello, ", "world!");
	if (strcmp(result, "Hello, world!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	result = ft_strjoin("", "Hello");
	if (strcmp(result, "Hello") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	result = ft_strjoin("Hello", "");
	if (strcmp(result, "Hello") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	result = ft_strjoin("", "");
	if (strcmp(result, "") == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	return (exit_code);
}