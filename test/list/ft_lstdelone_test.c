#include "../test_helper.h"

static int free_count = 0;

static void fictive_free(void *a)
{
	(void) a;
	free_count++;
}

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with a non-null list and a valid del function
	t_list *list1 = ft_lstnew("Hello");
	free_count = 0;
	ft_lstdelone(list1, fictive_free);
	if (list1 != NULL && free_count == 1)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 2: Testing with a null list and a valid del function
	t_list *list2 = NULL;
	free_count = 0;
	ft_lstdelone(list2, fictive_free);
	if (list2 == NULL && free_count == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 3: Testing with a non-null list and a null del function
	t_list *list3 = ft_lstnew("Hello");
	free_count = 0;
	ft_lstdelone(list3, NULL);
	if (list3 != NULL && free_count == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free(list3);

	return (exit_code);
}
