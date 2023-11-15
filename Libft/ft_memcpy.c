/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:25:27 by dieloren          #+#    #+#             */
/*   Updated: 2023/11/15 11:45:15 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	destiny = ((char *) dst);
	source = ((char *) src);
	i = 0;
	if (src == 0 && dst == 0)
		return (dst);
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}
