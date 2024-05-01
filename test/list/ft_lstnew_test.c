#include "../test_helper.h"

int main()
{
	int	exit_code = 0;

	t_list *list1 = ft_lstnew("Hello");
	if (list1 != NULL && strcmp(list1->content, "Hello") == 0 && list1->next == NULL)
	{
		success();
	}
	else
	{
		failed(&exit_code);
	}

	return (exit_code);
}