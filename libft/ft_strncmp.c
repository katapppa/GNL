/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:29:58 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/15 19:56:32 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	int				i;

	i = 0;
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (n > 0 && (ss1[i] != '\0' || ss2[i] != '\0'))
	{
		if (ss1[i] != ss2[i])
			return ((int)(ss1[i] - ss2[i]));
		i++;
		n--;
	}
	return (0);
}
