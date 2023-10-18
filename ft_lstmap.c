/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:23:15 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/11 15:05:08 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*n;

	if (!lst || !f)
		return (NULL);
	n = '\0';
	while (lst)
	{
		t = ft_lstnew((*f)(lst->content));
		if (!t)
		{
			ft_lstclear(&n,del);
			return (NULL);
		}
		ft_lstadd_back(&n, t);
		t = t->next;
		lst = lst->next;
	}
	return (n);
}
