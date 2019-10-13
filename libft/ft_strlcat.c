/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:50:26 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/20 18:18:03 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst1;
	size_t src1;
	size_t i;
	size_t j;

	dst1 = ft_strlen(dst);
	src1 = ft_strlen((char*)src);
	i = 0;
	j = ft_strlen(dst);
	if (size < dst1 + 1)
		return (src1 + size);
	while ((i < (size - dst1 - 1)) && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (src1 + dst1);
}
