#include "../test_helper.h"

static char test_function(unsigned int index, char c)
{
	return (c + index);
}

static char test_function2(unsigned int index, char c)
{
	(void) index;
	return (c);
}

int main()
{
	int	exit_code = 0;

	char *result1 = ft_strmapi("Hello", test_function);
	if (strcmp(result1, "Hfnos") == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free(result1);

	char *result2 = ft_strmapi("Test", test_function2);
	if (strcmp(result2, "Test") == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free(result2);

	char *result3 = ft_strmapi("", test_function);
	if (strcmp(result3, "") == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free(result3);

	return (exit_code);
}
