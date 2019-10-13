/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:37:41 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/11 19:55:49 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				i;
	int				j;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char*)haystack;
	s2 = (unsigned char*)needle;
	if (s2[0] == '\0')
		return ((char*)&s1[0]);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] != '\0' && s1[i + j] ==
				(s2[j]))
		{
			if (s2[j + 1] == '\0')
				return ((char*)&s1[i]);
			++j;
		}
		++i;
	}
	return (0);
}
