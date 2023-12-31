/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:33:11 by dieloren          #+#    #+#             */
/*   Updated: 2023/11/25 16:29:28 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (ft_strlen(s) == 0 || len <= 0 || start < 0 || start > ft_strlen(s))
		return ((char *)ft_calloc(1, 1));
	while (s[i] && j < len)
	{
		i++;
		j++;
	}
	substr = (char *)malloc((j + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < j)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
