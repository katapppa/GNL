/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:07:59 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/15 20:23:04 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*ss1 == *ss2 && *ss1 != '\0' && *ss2 != '\0')
	{
		if (*ss1 != *ss2)
			return (0);
		ss1++;
		ss2++;
	}
	if (*ss1 == *ss2 && *ss1 == '\0')
		return (1);
	return (0);
}
