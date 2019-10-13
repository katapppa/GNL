/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:01:15 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/16 17:53:15 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*ss1 == *ss2 && *ss1 != '\0' && *ss2 != '\0' && n > 0)
	{
		if (*ss1 != *ss2)
			return (0);
		ss1++;
		ss2++;
		n--;
	}
	if (n == 0)
	{
		ss1--;
		ss2--;
	}
	if (*ss1 == *ss2)
		return (1);
	return (0);
}
