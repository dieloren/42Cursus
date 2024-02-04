/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:05:06 by dieloren          #+#    #+#             */
/*   Updated: 2024/01/17 20:05:06 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num == 0)
	{
		printed_chars += ft_print_char('0');
		return (printed_chars);
	}
	if (num == -2147483648)
	{
		printed_chars += ft_print_string("-2147483648");
		return (printed_chars);
	}
	if (num < 0)
	{
		printed_chars += ft_print_char('-');
		num = -num;
	}
	if (num > 0)
		printed_chars += ft_print_unsigned((unsigned int)num);
	return (printed_chars);
}
