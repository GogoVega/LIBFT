#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char *result = ft_itoa(0);
	if (strcmp(result, "0") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_itoa(2147483647);
	if (strcmp(result, "2147483647") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_itoa(-2147483648);
	if (strcmp(result, "-2147483648") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
