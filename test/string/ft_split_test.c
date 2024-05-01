#include "../test_helper.h"
#include <string.h>

static int compareArrays(char **arr1, char **arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr1[i], arr2[i]) != 0)
		{
			return (0);
		}
	}
	return (1);
}

static void	free_array(char **array)
{
	int	i = 0;

	while (array[i])
		free(array[i++]);
	free(array);
}

int main()
{
	int	exit_code = 0;

	// Test case 1: Splitting a string with multiple words separated by a space
	const char *str1 = "Hello World! How are you?";
	char **result1 = ft_split(str1, ' ');
	char *expected1[] = {"Hello", "World!", "How", "are", "you?"};
	int size1 = sizeof(expected1) / sizeof(expected1[0]);
	if (compareArrays(result1, expected1, size1))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free_array(result1);

	// Test case 2: Splitting a string with a single word
	const char *str2 = "Hello";
	char **result2 = ft_split(str2, ' ');
	char *expected2[] = {"Hello"};
	int size2 = sizeof(expected2) / sizeof(expected2[0]);
	if (compareArrays(result2, expected2, size2))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free_array(result2);

	// Test case 3: Splitting an empty string
	const char *str3 = "";
	char **result3 = ft_split(str3, ' ');
	char *expected3[] = {};
	int size3 = sizeof(expected3) / sizeof(expected3[0]);
	if (compareArrays(result3, expected3, size3))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free_array(result3);

	// Test case 4: Splitting a string with delimiter at start and end
	const char *str4 = "  HelloWorld  ";
	char **result4 = ft_split(str4, ' ');
	char *expected4[] = {"HelloWorld"};
	int size4 = sizeof(expected4) / sizeof(expected4[0]);
	if (compareArrays(result4, expected4, size4))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free_array(result4);

	// Test case 5: Splitting a string with a non-alphanumeric delimiter
	const char *str5 = "Hello,World!";
	char **result5 = ft_split(str5, ',');
	char *expected5[] = {"Hello", "World!"};
	int size5 = sizeof(expected5) / sizeof(expected5[0]);
	if (compareArrays(result5, expected5, size5))
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free_array(result5);

	return (exit_code);
}
