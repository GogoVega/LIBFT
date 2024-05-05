/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:17:34 by gdandele          #+#    #+#             */
/*   Updated: 2024/05/05 16:14:58 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_padend(char *str, char c, size_t len)
{
	char	*dst;
	size_t	strlen;

	strlen = ft_strlen(str);
	if (strlen >= len)
		return (ft_strdup(str));
	dst = (char *) malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_memset((dst + strlen), c, (len - strlen));
	ft_memcpy(dst, str, strlen);
	dst[len] = '\0';
	return (dst);
}
