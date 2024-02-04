/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:41:27 by dieloren          #+#    #+#             */
/*   Updated: 2024/01/17 20:41:27 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num == 0)
		printed_chars += ft_print_char('0');
	else
	{
		if (num / 10 != 0)
			ft_print_unsigned(num / 10);
		ft_print_char((num % 10) + '0');
		while (num > 0)
		{
			num /= 10;
			printed_chars++;
		}
	}
	return (printed_chars);
}
