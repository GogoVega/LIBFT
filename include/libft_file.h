/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:45:24 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/01 14:55:56 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/**
 * @brief Allocates and gets the next line from a file descriptor.
 *
 * @param fd The file descriptor
 * @return char* The line read from the file. NULL if an error occured
 * or if the end of file is reached.
 */
char	*ft_get_next_line(int fd);

#endif
