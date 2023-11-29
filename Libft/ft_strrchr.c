/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:52:40 by dieloren          #+#    #+#             */
/*   Updated: 2023/11/29 10:54:16 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			str = ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
		str = ((char *)&s[i]);
	return ((char *)str);
}
