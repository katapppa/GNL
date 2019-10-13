/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:51:03 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/20 16:02:49 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*s;

	s = (t_list*)ft_memalloc(sizeof(t_list));
	if (s == 0)
		return (0);
	if (content == NULL)
	{
		s->content = NULL;
		s->content_size = 0;
	}
	else
	{
		s->content = ft_memalloc(content_size);
		if (s->content == NULL)
		{
			ft_memdel((void**)&s);
			return (NULL);
		}
		ft_memcpy(s->content, content, content_size);
		s->content_size = content_size;
	}
	s->next = NULL;
	return (s);
}
