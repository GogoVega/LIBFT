/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:43:04 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/09 15:53:00 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_cache(char **cache)
{
	if (*cache)
		free(*cache);
	*cache = NULL;
}

static int	append_cache_from_file(int fd, char **cache)
{
	size_t	i;
	char	buffer[BUFFER_SIZE + 1];
	char	*tmp;
	int		result;

	i = 0;
	tmp = *cache;
	while (i <= BUFFER_SIZE)
		buffer[i++] = '\0';
	result = read(fd, buffer, BUFFER_SIZE);
	if (result > -1)
	{
		*cache = ft_strjoin(*cache, buffer);
		if (!*cache)
			return (-1);
	}
	else
		*cache = NULL;
	if (tmp)
		free(tmp);
	return (result);
}

static char	*extract_line(char **cache, char *cached)
{
	char	*line;

	line = ft_strndup(*cache, (cached - *cache + 1));
	if (!line)
		return (NULL);
	*cache = ft_memmove(*cache, cached + 1, ft_strlen(cached + 1) + 1);
	return (line);
}

static char	*get_from_cache(int fd, char **cache)
{
	char	*cached;
	int		result;

	cached = ft_strchr(*cache, '\n');
	if (cached)
		return (extract_line(cache, cached));
	else
	{
		result = append_cache_from_file(fd, cache);
		if (result == 0 && ft_strlen(*cache))
			return (extract_line(cache, (ft_strchr(*cache, '\0') - 1)));
		if (result < 1)
			return (NULL);
		return (get_from_cache(fd, cache));
	}
}

char	*ft_get_next_line(int fd)
{
	static char	*cache[OPEN_MAX];
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	if (read(fd, NULL, 0) == -1)
	{
		free_cache(&cache[fd]);
		return (NULL);
	}
	if (cache[fd] == NULL)
	{
		cache[fd] = ft_strdup("");
		if (!cache[fd])
			return (NULL);
	}
	line = get_from_cache(fd, &cache[fd]);
	if (!line)
		free_cache(&cache[fd]);
	return (line);
}
