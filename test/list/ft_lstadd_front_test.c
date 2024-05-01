#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	// Test case 1: Adding a new node to an empty list
	t_list *list = NULL;
	t_list *new_node = ft_lstnew("Node 1");
	ft_lstadd_front(&list, new_node);
	if (list == new_node && list->next == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 2: Adding a new node to a non-empty list
	t_list *list2 = ft_lstnew("Node 1");
	t_list *new_node2 = ft_lstnew("Node 2");
	t_list *tmp = list2;
	ft_lstadd_front(&list2, new_node2);
	if (list2 == new_node2 && list2->next == tmp && tmp->next == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	// Test case 3: Adding a NULL node to a non-empty list
	t_list *list3 = ft_lstnew("Node 1");
	ft_lstadd_front(&list3, NULL);
	if (list3->next == NULL) {
		success();
	} else {
		failed(&exit_code);
	}

	return (exit_code);
}
