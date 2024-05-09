#ifndef TEST_HELPER_H
#define TEST_HELPER_H

#include "../include/libft.h"
#include <stdio.h>

void success()
{
	printf("\u2705 \033[0;32mTest passed!\033[0;37m\n");
}

void failed(int *exit_code)
{
	printf("\u274c \x1B[31mTest failed!\033[0;37m\n");
	*exit_code = 1;
}

#endif
