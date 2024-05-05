/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:32:12 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/05 16:15:07 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_padstart(char *str, char c, size_t len)
{
	char	*dst;
	size_t	strlen;

	strlen = ft_strlen(str);
	if (strlen >= len)
		return (ft_strdup(str));
	dst = (char *) malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_memset(dst, c, (len - strlen));
	ft_memcpy((dst + (len - strlen)), str, strlen);
	dst[len] = '\0';
	return (dst);
}
