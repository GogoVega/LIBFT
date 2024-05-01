#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	int result1 = ft_tolower('A');
	if (result1 == 'a') {
		success();
	} else {
		failed(&exit_code);
	}

	int result2 = ft_tolower('Z');
	if (result2 == 'z') {
		success();
	} else {
		failed(&exit_code);
	}

	int result3 = ft_tolower('a');
	if (result3 == 'a') {
		success();
	} else {
		failed(&exit_code);
	}

	int result4 = ft_tolower('z');
	if (result4 == 'z') {
		success();
	} else {
		failed(&exit_code);
	}

	int result5 = ft_tolower('9');
	if (result5 == '9') {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}