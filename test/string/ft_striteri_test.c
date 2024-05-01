#include "../test_helper.h"

static void test_function(unsigned int index, char *c)
{
	*c += index;
}

static void test_function2(unsigned int index, char *c)
{
	(void) index;
	(void) c;
}

int main()
{
	int	exit_code = 0;

	char str1[] = "Hello";
	ft_striteri(str1, test_function);
	if (strcmp(str1, "Hfnos") == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	char str2[] = "Test";
	ft_striteri(str2, test_function2);
	if (strcmp(str2, "Test") == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	char str3[] = "";
	ft_striteri(str3, test_function);
	if (strcmp(str3, "") == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}
