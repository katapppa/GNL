/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:29:25 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/19 20:09:55 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*st;
	size_t			i;

	if (size + 1 == 0)
		return (NULL);
	st = (unsigned char*)malloc(size + 1);
	i = 0;
	if (st == NULL)
		return (NULL);
	while (i < size + 1)
	{
		st[i] = '\0';
		i++;
	}
	return ((char*)st);
}
