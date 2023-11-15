/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:00:40 by dieloren          #+#    #+#             */
/*   Updated: 2023/11/15 12:08:10 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	chr;

	i = 0;
	str = ((char *)s);
	chr = ((char)c);
	while (i < n)
	{
		if (str[i] == chr)
			return (str[i]);
	}
	return (NULL);
}
