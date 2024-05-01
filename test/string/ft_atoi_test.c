#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	int result = ft_atoi("   +0  ");
	if (result == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_atoi("2147483647");
	if (result == 2147483647) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_atoi("-2147483648");
	if (result == -2147483648) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_atoi("+10abc");
	if (result == 10) {
		success();
	} else {
		failed(&exit_code);
	}

	result = ft_atoi("+-10");
	if (result == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
