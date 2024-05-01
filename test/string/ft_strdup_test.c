#include "../test_helper.h"
#include <string.h>

int main()
{
	int	exit_code = 0;

	char *str = "Hello, world!";
	char *result = ft_strdup(str);
	if (strcmp(result, str) == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	str = "";
	result = ft_strdup(str);
	if (strcmp(result, str) == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	str = "1234567890";
	result = ft_strdup(str);
	if (strcmp(result, str) == 0) {
		success();
	} else {
		failed(&exit_code);
	}
	free(result);

	return (exit_code);
}