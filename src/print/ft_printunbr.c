/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:00:57 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/22 17:31:43 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_printunbr(n / 10);
		len += ft_printunbr(n % 10);
	}
	else
		len += ft_printchar(n + '0');
	return (len);
}
