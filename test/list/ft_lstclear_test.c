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

	// Test case 1: Testing with an empty list
	t_list *list = NULL;
	free_count = 0;
	ft_lstclear(&list, fictive_free);
	// Check if the list is empty
	if (list == NULL && free_count == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 2: Testing with a list containing one element
	t_list *list2 = ft_lstnew("Hello");
	free_count = 0;
	ft_lstclear(&list2, fictive_free);
	// Check if the list is empty
	if (list2 == NULL && free_count == 1)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 3: Testing with a list containing multiple elements
	t_list *list3 = ft_lstnew("Hello");
	t_list *new_node = ft_lstnew("World");
	t_list *new_node2 = ft_lstnew("Copilot");
	ft_lstadd_back(&list3, new_node);
	ft_lstadd_back(&list3, new_node2);
	free_count = 0;
	ft_lstclear(&list3, fictive_free);
	// Check if the list is empty
	if (list3 == NULL && free_count == 3)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}
