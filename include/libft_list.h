/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:30:43 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/01 10:36:03 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

/**
 * @brief The structure representing a linked list node.
 *
 * The `t_list` structure is used to create a linked list where each node
 * contains a pointer to some content and a pointer to the next node in
 * the list.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Adds the node ’new’ at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Adds the element ’new’ at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Deletes and frees the given node and every successor of that
 * node, using the function ’del’ and free. Finally, the pointer to the
 * list must be set to NULL.
 *
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the
 * element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Takes as a parameter a node and frees the memory of the node’s
 * content using the function ’del’ given as a parameter and free the node.
 * The memory of ’next’ must not be freed.
 *
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content
 * of each node.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Returns the last node of the list.
 *
 * @param lst The address of a pointer to the beginning of the list.
 * @return t_list* The address of a pointer to the last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content
 * of each node. Creates a new list resulting of the successive applications
 * of the function ’f’. The ’del’ function is used to delete the content of
 * an element if needed.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content.
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief Allocates with malloc and returns a new node. The member
 * variable ’content’ is initialized with the value of the
 * parameter ’content’.  The variable ’next’ is initialized to NULL.
 *
 * @param content The content to create the node with.
 * @return The new node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Counts the number of nodes in a list.
 *
 * @param lst The address of a pointer to the beginning of the list.
 * @return int The number of nodes in the list.
 */
int		ft_lstsize(t_list *lst);

#endif
