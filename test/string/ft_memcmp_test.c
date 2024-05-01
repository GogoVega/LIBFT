#include "../test_helper.h"
#include <string.h>

int main()
{
	int	exit_code = 0;

	// Test case 1: Comparing two equal strings
	char str1[] = "Hello";
	char str2[] = "Hello";
	int result = ft_memcmp(str1, str2, strlen(str1));
	if (result == 0 && memcmp(str1, str2, strlen(str1)) == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 2: Comparing two different strings
	char str3[] = "Hello";
	char str4[] = "World";
	result = ft_memcmp(str3, str4, strlen(str3));
	if (result != 0 && memcmp(str3, str4, strlen(str3)) != 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 3: Comparing strings with different lengths
	char str5[] = "Hello";
	char str6[] = "Hello, World!";
	result = ft_memcmp(str5, str6, strlen(str5));
	if (result == 0 && memcmp(str5, str6, strlen(str5)) == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}
