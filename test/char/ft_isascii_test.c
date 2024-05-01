#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	if (ft_isascii('A') && ft_isascii('a') && ft_isascii('Z') && ft_isascii('z')) {
		success();
	} else {
		failed(&exit_code);
	}

	if (ft_isascii('0') && ft_isascii('9')) {
		success();
	} else {
		failed(&exit_code);
	}

	if (ft_isascii('$') && ft_isascii(' ')) {
		success();
	} else {
		failed(&exit_code);
	}

	if (ft_isascii(0) && ft_isascii(127) && !ft_isascii(-1) && !ft_isascii(128)) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
