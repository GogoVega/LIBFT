/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:49:45 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/22 17:31:26 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printhex_base(unsigned long int n, char *base)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_printhex_base(n / 16, base);
		len += ft_printhex_base(n % 16, base);
		return (len);
	}
	return (ft_printchar(base[n]));
}
