/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:00:40 by dieloren          #+#    #+#             */
/*   Updated: 2023/11/29 11:23:49 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	char	target;
	size_t	i;

	string = ((char *)s);
	target = ((char)c);
	i = 0;
	while (i < n)
	{
		if (string[i] != target)
			i++;
		else
			return ((char *)&s[i]);
	}
	return (0);
}
