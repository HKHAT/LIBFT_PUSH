/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:09:13 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/19 19:21:31 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	total;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	end = len;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	if (start > end || start == len)
		return (ft_strdup(""));
	while (start < end && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	total = end - start;
	str = (char *)malloc(total + 1);
	if (!str)
		return (NULL);
	ft_strncpy(str, s1 + start, total);
	str[total] = '\0';
	return (str);
}
