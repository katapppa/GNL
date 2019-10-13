/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:51:47 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/12 20:48:08 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = (char)c;
	while (*s != a && *s != '\0')
	{
		s++;
	}
	if (*s == '\0' && a != '\0')
		return (NULL);
	else if (*s == '\0' && a == '\0')
		return ((char*)s);
	else if (*s != '\0')
		return ((char*)s);
	return (NULL);
}
