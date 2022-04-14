/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:56:50 by darakely          #+#    #+#             */
/*   Updated: 2022/04/15 01:57:43 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char		*str = "42 Yerevan";
	int		i = -2147483648;
	int		hex = 61;
	unsigned int	j = -1;
	char		*ptr = "Boom Best";
	char		character = 't';
	

	printf("printf:		[str: %s] + [int: %i] + [hex: %X] + [unsigned: %u] + [ptr: %p] + [char: %c] + [procent: %%]\n", str, i, hex, j, ptr, character);
	ft_printf("ft_printf:	[str: %s] + [int: %i] + [hex: %X] + [unsigned: %u] + [ptr: %p] + [char: %c] + [procent: %%]\n", str, i, hex, j, ptr, character);
	printf("\n\n\n");
	printf("printf:      Programmer\n");
	ft_printf("ft_printf:   Programmer\n");
	
	return (0);
}
