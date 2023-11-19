/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:57:33 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/19 16:22:35 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sign(const char *nptr, int *i)
{
	int	s;

	s = 1;
	while (nptr[*i] == '+' || nptr[*i] == '-')
	{
		if (nptr[*i + 1] == '-' || nptr[*i + 1] == '+')
			return (0);
		if (nptr[*i] == '-')
		{
			s *= -1;
			(*i)++;
		}
		else
		{
			(*i)++;
		}
	}
	return (s);
}

long long int   ft_rakem(const char *nptr, int *i, int s)
{
	long long int	nb = 0;
	int	digit;

	while (nptr[*i] && nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		digit = nptr[*i] - '0';
		if (s > 0 && nb > (LLONG_MAX - digit) / 10)
			return (-1);
		else if (s < 0 && nb < (LLONG_MIN + digit) / 10)
			return (0);
		nb = nb * 10 + s * digit;
		(*i)++;
	}
	return (nb);
}

int	ft_atoi(const char *nptr)
{
	int				i;
	int				s;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	s = ft_sign(nptr, &i);
	return ((int)ft_rakem(nptr, &i, s));
}
