#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char dst[20] = "Hello";
	const char *src = " World!";
	size_t dstsize = sizeof(dst);

	// Test case 1: Concatenating strings within the available space
	size_t result = ft_strlcat(dst, src, dstsize);
	if (strcmp(dst, "Hello World!") == 0 && result == 12) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Destination buffer is already full
	char dst2[5] = "Test";
	const char *src2 = "Overflow";
	size_t dstsize2 = sizeof(dst2);
	result = ft_strlcat(dst2, src2, dstsize2);
	if (strcmp(dst2, "Test") == 0 && result == strlcat(dst2, src2, dstsize2)) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Empty source string
	char dst3[10] = "Hello";
	const char *src3 = "";
	size_t dstsize3 = sizeof(dst3);
	result = ft_strlcat(dst3, src3, dstsize3);
	if (strcmp(dst3, "Hello") == 0 && result == 5) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 4: Destination buffer size is 0
	char dst4[10] = "Hello";
	const char *src4 = " World!";
	size_t dstsize4 = 0;
	result = ft_strlcat(dst4, src4, dstsize4);
	if (strcmp(dst4, "Hello") == 0 && result == strlcat(dst4, src4, dstsize4)) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 5: Destination buffer size is smaller than the real size
	char dst5[] = "Test";
	const char *src5 = "";
	size_t dstsize5 = sizeof(dst5) -2;
	result = ft_strlcat(dst5, src5, dstsize5);
	if (strcmp(dst5, "Test") == 0 && result == strlcat(dst5, src5, dstsize5)) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}