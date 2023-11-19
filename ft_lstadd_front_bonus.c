/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:15:47 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/17 22:35:53 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "mehdi";
// 	char *r = "zero";
// 		char *y = "mk";
// 	t_list *new = ft_lstnew(s);
// 	t_list *a = ft_lstnew(r);
// 	t_list *b = ft_lstnew(y);
// 	t_list *c = ft_lstnew(r);
// 	ft_lstadd_front(&new,a);
// 	ft_lstadd_front(&new,b);
// 	ft_lstadd_front(&new,c);
// 	while(new != NULL)
// 	{
// 		printf("%s\n",(char *)new->content);
// 		new = new->next;
// 	}
// 	t_list *temp;
// 		while(new != NULL)
// 	{
// 		temp = new;
// 		new = new->next;
// 		free(new->content);
// 		free(temp);
// 	}

// 	return (0);
// }
