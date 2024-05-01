/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:45:23 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/16 21:19:20 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2 || nb == 4)
		return (0);
	while (div < 46340 && div < (nb / 2))
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
