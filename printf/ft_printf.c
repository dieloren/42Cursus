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
	{
		write(1, '%', 1);
		return (1);
	}
	else if (format[i + 1] == 'c')
	{
		write(1, va_arg(args, int), 1);
		return (1);
	}
	else if (format[i + 1] == 's')
	{
		
	}
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
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		i++;
	}
}
