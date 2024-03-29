/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:13:31 by dieloren          #+#    #+#             */
/*   Updated: 2024/01/17 14:14:11 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	printed_chars;

	printed_chars = 0;
	while (str[printed_chars])
		printed_chars += ft_print_char(str[printed_chars]);
	return (printed_chars);
}
