/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieloren <dieloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:23:47 by dieloren          #+#    #+#             */
/*   Updated: 2023/11/28 12:23:47 by dieloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_to_del(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		len;
	char	*final_string;

	start = 0;
	while (s1[start] && ft_check_to_del(s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (len > start && ft_check_to_del(s1[len - 1], set))
		len--;
	final_string = (char *)malloc((len - start + 1) * sizeof(char));
	if (!final_string)
		return (NULL);
	i = 0;
	while (start < len)
	{
		final_string[i] = s1[start];
		i++;
		start++;
	}
	final_string[i] = '\0';
	return (final_string);
}
