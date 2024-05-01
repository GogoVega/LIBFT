#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char *haystack = "Hello, world!";
	char *needle = "world";
	char *result = ft_strnstr(haystack, needle, 13);
	if (result != NULL && strcmp(result, "world!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	haystack = "Hello, world!";
	needle = "foo";
	result = ft_strnstr(haystack, needle, 13);
	if (result == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	haystack = "Hello, world!";
	needle = "Hello";
	result = ft_strnstr(haystack, needle, 13);
	if (result != NULL && strcmp(result, "Hello, world!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	haystack = "Hello, world!";
	needle = "";
	result = ft_strnstr(haystack, needle, 13);
	if (result != NULL && strcmp(result, "Hello, world!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	haystack = "Hello, world!";
	needle = "world";
	result = ft_strnstr(haystack, needle, 5);
	if (result == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	haystack = "HelHello, world!";
	needle = "Hello";
	result = ft_strnstr(haystack, needle, 16);
	if (result != NULL && strcmp(result, "Hello, world!") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}