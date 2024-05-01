/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:50:53 by gdandele          #+#    #+#             */
/*   Updated: 2024/04/22 17:31:19 by gdandele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_arg(va_list *args, char type)
{
	if (type == 'c')
		return (ft_printchar(va_arg(*args, int)));
	if (type == 's')
		return (ft_printstr(va_arg(*args, const char *)));
	if (type == 'p')
		return (ft_printptr(va_arg(*args, unsigned long int)));
	if (type == 'd' || type == 'i')
		return (ft_printnbr(va_arg(*args, int)));
	if (type == 'u')
		return (ft_printunbr(va_arg(*args, unsigned int)));
	if (type == 'x')
		return (ft_printhex_base(va_arg(*args, unsigned int),
				"0123456789abcdef"));
	if (type == 'X')
		return (ft_printhex_base(va_arg(*args, unsigned int),
				"0123456789ABCDEF"));
	if (type == '%')
		return (ft_printchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!str)
		return (0);
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_print_arg(&args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
