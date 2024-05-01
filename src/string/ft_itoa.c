/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:46:47 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/16 21:21:21 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: ft_numlen
static int	get_str_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*dest;
	int			len;

	len = get_str_len(n);
	dest = (char *) ft_calloc(sizeof(char), (len + 1));
	if (!dest)
		return (NULL);
	nb = n;
	if (n < 0)
		nb *= -1;
	dest[len] = '\0';
	while (len--)
	{
		dest[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
