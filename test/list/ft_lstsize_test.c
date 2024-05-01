#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with an empty list
	t_list *list = NULL;
	int size = ft_lstsize(list);
	// Check if the size is 0
	if (size == 0)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 2: Testing with a list containing one element
	t_list *list2 = ft_lstnew("Hello");
	size = ft_lstsize(list2);
	// Check if the size is 1
	if (size == 1)
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
	size = ft_lstsize(list3);
	// Check if the size is 3
	if (size == 3)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}