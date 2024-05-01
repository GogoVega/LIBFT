#include "../test_helper.h"

static int count = 0;

static void random_fct(void *a)
{
	(void) a;
	count++;
}

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with a non-null list and a valid del function
	t_list *list1 = ft_lstnew("Hello");
	count = 0;
	ft_lstiter(list1, random_fct);
	if (count == 1)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 2: Testing with a null list and a valid del function
	t_list *list2 = NULL;
	count = 0;
	ft_lstiter(list2, random_fct);
	if (count == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 3: Testing with a non-null list and a null del function
	t_list *list3 = ft_lstnew("Hello");
	count = 0;
	ft_lstiter(list3, NULL);
	// Check if the list is freed and the del function is not called
	if (count == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}