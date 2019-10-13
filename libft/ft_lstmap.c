/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:11:34 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/20 16:49:41 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *t;
	t_list *elem;
	t_list *first;

	if (lst == 0 || f == 0)
		return (NULL);
	t = f(lst);
	first = ft_lstnew(t->content, t->content_size);
	if (first == 0)
		return (NULL);
	elem = first;
	while (lst->next)
	{
		lst = lst->next;
		t = f(lst);
		elem->next = ft_lstnew(t->content, t->content_size);
		if (elem->next == 0)
		{
			ft_lstdel(&first, &ft_lstfree);
			return (NULL);
		}
		elem = elem->next;
	}
	return (first);
}
