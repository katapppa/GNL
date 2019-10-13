/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:07:15 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/09 18:46:44 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*ptr;
	char			sig;
	unsigned int	i;

	ptr = (char*)b;
	sig = (unsigned char)c;
	i = 0;
	while (len != 0)
	{
		ptr[i] = sig;
		i++;
		len--;
	}
	return (b);
}
