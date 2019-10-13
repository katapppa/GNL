/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:19:53 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/11 18:25:43 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	unsigned char	a;
	int				i;

	ptrs = (unsigned char*)s;
	a = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (ptrs[i] == a)
			return ((void*)&ptrs[i]);
		i++;
		n--;
	}
	return (NULL);
}
