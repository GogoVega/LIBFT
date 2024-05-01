#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test 1: Allocating and initializing an array of integers
	int *arr = ft_calloc(5, sizeof(int));
	if (arr != NULL)
	{
		// Check if the array is initialized with zeros
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] != 0)
			{
				failed(&exit_code);
				return (1);
			}
		}
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test 2: Allocating and initializing an array of characters
	char *str = ft_calloc(10, sizeof(char));
	if (str != NULL)
	{
		// Check if the string is initialized with null terminators
		int i;
		for (i = 0; i < 10; i++)
		{
			if (str[i] != '\0')
			{
				failed(&exit_code);
				return (1);
			}
		}
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test 3: Allocating and initializing an array of structs
	typedef struct
	{
		int x;
		int y;
	} Point;

	Point *points = ft_calloc(3, sizeof(Point));
	if (points != NULL)
	{
		// Check if the structs are initialized with zeros
		for (int i = 0; i < 3; i++)
		{
			if (points[i].x != 0 || points[i].y != 0)
			{
				failed(&exit_code);
				return (1);
			}
		}
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}
