/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:03:11 by dieloren          #+#    #+#             */
/*   Updated: 2024/01/17 14:14:23 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
int	ft_check_character(const char *format, int i, va_list args);
int	ft_print_string(char *str);
int	ft_print_char(char c);
int	ft_print_number(int num);

#endif