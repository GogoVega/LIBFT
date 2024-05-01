#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Adding a new node to an empty list
	t_list *list = NULL;
	t_list *new_node = ft_lstnew("Node 1");
	ft_lstadd_back(&list, new_node);
	if (list == new_node && list->next == NULL) {
		success();
	} else {
		failed(&exit_code);
	}
	free(new_node);

	// Test case 2: Adding a new node to a non-empty list
	t_list *list2 = ft_lstnew("Node 1");
	t_list *new_node2 = ft_lstnew("Node 2");
	ft_lstadd_back(&list2, new_node2);
	if (list2->next == new_node2 && new_node2->next == NULL) {
		success();
	} else {
		failed(&exit_code);
	}
	free(list2);
	free(new_node2);

	// Test case 3: Adding a NULL node to a non-empty list
	t_list *list3 = ft_lstnew("Node 1");
	ft_lstadd_back(&list3, NULL);
	if (list3->next == NULL) {
		success();
	} else {
		failed(&exit_code);
	}
	free(list3);

	return (exit_code);
}
