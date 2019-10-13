/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:23:28 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/15 17:34:49 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*st;

	st = (unsigned char*)malloc(size);
	if (st == NULL)
		return (NULL);
	ft_bzero(st, size);
	return (st);
}
