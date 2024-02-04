/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 00:42:58 by dieloren          #+#    #+#             */
/*   Updated: 2024/01/17 14:12:34 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_character(const char *format, int i, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	if (format[i + 1] == '%')
		printed_chars += ft_print_char('%');
	else if (format[i + 1] == 'c')
		printed_chars += ft_print_char(va_arg(args, int));
	else if (format[i + 1] == 's')
		printed_chars += ft_print_string(va_arg(args, char*));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		printed_chars += ft_print_number(va_arg(args, int));
	return (printed_chars);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			printed_chars += ft_check_character(format, i, args);
			i++;
		}
		else
			printed_chars += ft_print_char(format[i]);
		i++;
	}
}
