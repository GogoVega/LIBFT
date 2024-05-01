#ifndef TEST_HELPER_H
#define TEST_HELPER_H

#include "../include/libft.h"
#include <stdio.h>

void success()
{
	printf("\033[0;32m");
	printf("\u2705 Test passed!\n");
	printf("\033[0;37m");
}

void failed(int *exit_code)
{
	printf("\x1B[31m");
	printf("\u274c Test failed!\n");
	printf("\033[0;37m");
	*exit_code = 1;
}

#endif
