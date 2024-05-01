#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	int result1 = ft_toupper('a');
	if (result1 == 'A') {
		success();
	} else {
		failed(&exit_code);
	}

	int result2 = ft_toupper('z');
	if (result2 == 'Z') {
		success();
	} else {
		failed(&exit_code);
	}

	int result3 = ft_toupper('A');
	if (result3 == 'A') {
		success();
	} else {
		failed(&exit_code);
	}

	int result4 = ft_toupper('Z');
	if (result4 == 'Z') {
		success();
	} else {
		failed(&exit_code);
	}

	int result5 = ft_toupper('9');
	if (result5 == '9') {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}