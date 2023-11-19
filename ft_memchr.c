/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:06:53 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/05 19:04:28 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sr;

	sr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sr[i] == (unsigned char)c)
		{
			return (&sr[i]);
		}
		i++;
	}
	return (NULL);
}
