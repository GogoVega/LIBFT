#include "../test_helper.h"
#include <string.h>

int main()
{
	int	exit_code = 0;

	char str[] = "Hello, World!";
	char ch = 'W';
	char *result = ft_memchr(str, ch, strlen(str));

	if (result != NULL && result == strchr(str, ch))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	ch = 'o';
	result = ft_memchr(str, ch, 4);

	if (result == NULL && result == memchr(str, ch, 4))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	ch = '!';
	result = ft_memchr(str, ch, strlen(str));

	if (result != NULL && result == memchr(str, ch, strlen(str)))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	ch = 'z';
	result = ft_memchr(str, ch, strlen(str));

	if (result == NULL && result == strchr(str, ch))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}
