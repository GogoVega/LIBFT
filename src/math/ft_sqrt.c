/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:42:29 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/16 21:54:54 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (res <= nb && i < 46341)
	{
		i++;
		res = i * i;
	}
	if (((i - 1) * (i - 1)) != nb)
		return (0);
	return (i - 1);
}
