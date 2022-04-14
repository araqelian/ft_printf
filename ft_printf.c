/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:23:16 by darakely          #+#    #+#             */
/*   Updated: 2022/04/15 00:13:49 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_process(va_list arg, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_print_char(va_arg(arg, int));
	else if (str == 's')
		len += ft_print_str(va_arg(arg, char *));
	else if (str == 'p')
		len += ft_print_ptr(va_arg(arg, unsigned long long int));
	else if (str == 'd' || str == 'i')
		len += ft_print_nbr(va_arg(arg, int));
	else if (str == 'u')
		len += ft_print_unbr(va_arg(arg, unsigned int));
	else if (str == 'x' || str == 'X')
		len += ft_print_hex(va_arg(arg, unsigned int), str);
	else if (str == '%')
		len += ft_print_char('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	arg;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_get_process(arg, str[i + 1]);
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
