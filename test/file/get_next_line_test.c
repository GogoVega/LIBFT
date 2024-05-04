/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:30:05 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/04 21:01:27 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

#include "../../include/libft.h"

static int	allClosed(int *tab, int size)
{
	while (size > 1 && tab[size - 1] == -1)
		size--;
	return (size == 1);
}

void	test(void)
{
	char	*dest = "";
	int		fd = open("/dev/stdin", O_RDONLY);

	if (fd < 0)
		return ;
	while (dest)
	{
		dest = ft_get_next_line(fd);
		if (dest)
		{
			printf("%s", dest);
			free(dest);
		}
	}
	close(fd);
}

void	test_bonus(int argc, char **argv)
{
	char	*dest = "";
	int		*fd;
	int		i = 1;

	fd = (int *) malloc(sizeof(int) * argc);
	if (!fd) return ;
	while (i < argc)
	{
		fd[i] = open(argv[i], O_RDONLY);
		i++;
	}
	i = 1;
	while (!allClosed(fd, argc))
	{
		if (i >= argc) i = 1;
		
		dest = ft_get_next_line(fd[i]);
		if (dest)
		{
			printf("%s", dest);
			free(dest);
		}
		else
		{
			close(fd[i]);
			fd[i] = -1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		test();
	else
		test_bonus(argc, argv);
	return (0);
}
