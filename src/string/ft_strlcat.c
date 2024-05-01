/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:24:22 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/11 14:44:28 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	while (src[i] && ((dstlen + i) < (dstsize - 1)))
	{
		dst[(dstlen + i)] = src[i];
		i++;
	}
	dst[(dstlen + i)] = '\0';
	return (srclen + dstlen);
}
