/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:30:48 by darakely          #+#    #+#             */
/*   Updated: 2022/04/14 23:35:01 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unbr(unsigned int i)
{
	int	len;

	len = 0;
	if (i < 10)
		len += ft_print_char(i + '0');
	else
	{
		len += ft_print_unbr(i / 10);
		len += ft_print_unbr(i % 10);
	}
	return (len);
}
