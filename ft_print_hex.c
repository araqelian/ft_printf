/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:35:30 by darakely          #+#    #+#             */
/*   Updated: 2022/04/14 23:46:35 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_print_hex(unsigned int i, const char str)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "abcdef";
	if (i < 10)
		len += ft_print_char(i + '0');
	else if (i < 16 && str == 'X')
		len += ft_print_char((char)ft_toupper(hex[i - 10]));
	else if (i < 16 && str == 'x')
		len += ft_print_char(hex[i - 10]);
	else
	{
		len += ft_print_hex(i / 16, str);
		len += ft_print_hex(i % 16, str);
	}
	return (len);
}
