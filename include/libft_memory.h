/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_memory.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:30:43 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/01 10:52:02 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEMORY_H
# define LIBFT_MEMORY_H

# include <stdlib.h>

/**
 * @brief The calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to the
 * allocated memory. The allocated memory is filled with bytes of value zero.
 *
 * @param count The number of elements.
 * @param size The size of an element.
 * @return void* A pointer to allocated memory. NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);

#endif
