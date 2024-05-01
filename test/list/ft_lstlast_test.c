#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Testing with an empty list
	t_list *list = NULL;
	t_list *last = ft_lstlast(list);
	// Check if the last node is NULL
	if (last == NULL)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	// Test case 2: Testing with a list containing one element
	t_list *list2 = ft_lstnew("Hello");
	t_list *last2 = ft_lstlast(list2);
	// Check if the last node is the same as the only node in the list
	if (last2 == list2)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free(list2);

	// Test case 3: Testing with a list containing multiple elements
	t_list *list3 = ft_lstnew("Hello");
	t_list *new_node = ft_lstnew("World");
	t_list *new_node2 = ft_lstnew("Copilot");
	ft_lstadd_back(&list3, new_node);
	ft_lstadd_back(&list3, new_node2);
	t_list *last3 = ft_lstlast(list3);
	// Check if the last node is the same as the last added node
	if (last3 == new_node2)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}
	free(list3);
	free(new_node);
	free(new_node2);

	return (exit_code);
}