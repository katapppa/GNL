/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:13:58 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/08 17:28:23 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*f;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	f = (char *)malloc((i + 1) * sizeof(char));
	src = src - i;
	if (f != NULL)
	{
		while (*src != '\0')
		{
			*f = *src;
			f++;
			src++;
		}
		*f = '\0';
		f = f - i;
	}
	return (f);
}
