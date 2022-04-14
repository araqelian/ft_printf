/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:42:36 by darakely          #+#    #+#             */
/*   Updated: 2022/04/14 23:46:03 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(int c);
int	ft_print_hex(unsigned int i, const char str);
int	ft_print_nbr(int i);
int	ft_print_ptr(unsigned long long int i);
int	ft_print_str(char *str);
int	ft_print_unbr(unsigned int i);

#endif
