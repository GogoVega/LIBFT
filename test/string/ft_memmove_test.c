#include "../test_helper.h"
#include <string.h>

int main()
{
	int	exit_code = 0;

	char src[] = "Hello, World!";
	char dest[20];

	// Test case 1: Copying from src to dest
	ft_memmove(dest, src, strlen(src) + 1);
	if (strcmp(dest, src) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Overlapping memory regions
	char str[20] = "Hello, World!";
	ft_memmove(str + 6, str, strlen(str) + 1);
	if (strcmp(str, "Hello,Hello, World!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Overlapping memory regions
	char str0[20] = "Hello, World!";
	ft_memmove(str0, str0 + 6, strlen(str0) + 1);
	if (strcmp(str0, " World!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 4: Replacing str1 with str2
	char str1[] = "Hello, World!";
	char str2[] = "Goodbye";
	ft_memmove(str1, str2, strlen(str1) + 1);
	if (strcmp(str1, "Goodbye") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
