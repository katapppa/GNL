/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:45:54 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/18 20:17:20 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;
	unsigned char	a;
	int				i;

	i = 0;
	ptrdst = (unsigned char*)dst;
	ptrsrc = (unsigned char*)src;
	a = (unsigned char)c;
	while (n > 0)
	{
		ptrdst[i] = ptrsrc[i];
		if (ptrsrc[i] == a)
		{
			i++;
			return ((void*)&ptrdst[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
