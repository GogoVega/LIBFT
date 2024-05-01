/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:13:00 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/22 17:31:39 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(const char *str)
{
	if (str == NULL)
		str = "(null)";
	ft_putstr_fd((char *) str, STDOUT);
	return (ft_strlen(str));
}
