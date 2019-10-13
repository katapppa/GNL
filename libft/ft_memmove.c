/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:03:16 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/15 17:07:49 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	i = 0;
	ptrdst = (unsigned char*)dst;
	ptrsrc = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (ptrsrc < ptrdst)
	{
		while (len > 0)
		{
			ptrdst[len - 1] = ptrsrc[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
