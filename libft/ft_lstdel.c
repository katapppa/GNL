/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:58:00 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/20 16:06:08 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *a;

	if (alst)
	{
		while (*alst)
		{
			a = (*alst);
			(*alst) = (*alst)->next;
			del((a)->content, (a)->content_size);
			ft_memdel((void**)&a);
		}
		free(*alst);
	}
}
