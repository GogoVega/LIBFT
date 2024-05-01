#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	if (ft_isprint('A') && ft_isprint('z') && ft_isprint('0') && ft_isprint('9')) {
		success();
	} else {
		failed(&exit_code);
	}

	if (ft_isprint('$') && ft_isprint(' ') && ft_isprint(':') && ft_isprint('}')) {
		success();
	} else {
		failed(&exit_code);
	}

	if (!ft_isprint('\n') && !ft_isprint('\t') && !ft_isprint('\r')) {
		success();
	} else {
		failed(&exit_code);
	}

	if (!ft_isprint(31) && !ft_isprint(127)) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}