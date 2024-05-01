#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	char src1[] = "Hello, world!";
	char dst1[20];
	size_t result1 = ft_strlcpy(dst1, src1, sizeof(dst1));
	if (result1 == strlen(src1) && strcmp(dst1, src1) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	char src2[] = "This is a longer string";
	char dst2[10];
	size_t result2 = ft_strlcpy(dst2, src2, sizeof(dst2));
	if (result2 == strlen(src2) && strncmp(dst2, src2, sizeof(dst2) - 1) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	char src3[] = "";
	char dst3[5];
	size_t result3 = ft_strlcpy(dst3, src3, sizeof(dst3));
	if (result3 == strlen(src3) && strcmp(dst3, src3) == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	char src4[] = "A";
	char dst4[5] = "Test";
	size_t result4 = ft_strlcpy(dst4, src4, 0);
	if (result4 == strlen(src4) && strcmp(dst4, "Test") == 0) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
