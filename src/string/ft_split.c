/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:25:07 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/15 14:47:21 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
}

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	count;
	size_t			i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, size_t *start)
{
	char	*word;
	size_t	end;
	size_t	i;

	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = (char *) malloc(sizeof(char) * (end - *start + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (*start < end)
	{
		word[i] = s[*start];
		(*start)++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**complete_array(char **array, char const *s, char c)
{
	size_t			i;
	size_t			start;

	i = 0;
	start = 0;
	while (s[start])
	{
		if (s[start] != c)
		{
			array[i] = get_next_word(s, c, &start);
			if (array[i] == NULL)
			{
				ft_free(array, i - 1);
				return (NULL);
			}
			i++;
		}
		else
			start++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	word_count;
	char			**dest;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	dest = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!dest)
		return (NULL);
	dest = complete_array(dest, s, c);
	return (dest);
}
