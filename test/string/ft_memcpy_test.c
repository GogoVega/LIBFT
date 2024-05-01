#include "../test_helper.h"
#include <string.h>

int main()
{
	int	exit_code = 0;

	char src[] = "Hello, World!";
	char dest[20];

	// Test case 1: Copying a string
	ft_memcpy(dest, src, strlen(src) + 1);
	if (strcmp(dest, src) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Copying an empty string
	ft_memcpy(dest, "", 1);
	if (strcmp(dest, "") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Copying a single character
	ft_memcpy(dest, "A", 2);
	if (strcmp(dest, "A") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 4: Copying a large buffer
	char largeSrc[1000];
	char largeDest[1000];
	memset(largeSrc, 'X', sizeof(largeSrc));
	ft_memcpy(largeDest, largeSrc, sizeof(largeSrc));
	if (memcmp(largeDest, largeSrc, sizeof(largeSrc)) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
