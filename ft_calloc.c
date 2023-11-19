/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:58:11 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/19 15:33:34 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (!nmemb || !size)
	{
		p = malloc(0);
		return (p);
	}
	total = nmemb * size;
	if (total >= SIZE_MAX)
		return (NULL);
	if (total / nmemb != size)
		return (NULL);
	p = malloc(total);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, total);
	return (p);
}
