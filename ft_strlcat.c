/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:21:21 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/19 17:26:49 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dest_len;
	size_t		total_len;
	const char	*s;

	if ((!dest || !src) && !size)
		return (0);
	s = src;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len < size)
		total_len = dest_len + ft_strlen(s);
	else
		return (size + ft_strlen(s));
	while (*s && (dest_len + 1) < size)
	{
		dest[dest_len] = *s++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (total_len);
}
