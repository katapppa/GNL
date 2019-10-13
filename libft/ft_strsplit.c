/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:22:43 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/20 15:55:00 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word(const char *str, char c)
{
	int k;

	k = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			k++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (k);
}

char			**ft_strsplit(char const *str, char c)
{
	int		k;
	int		s;
	int		i;
	char	**tab;

	i = -1;
	if (str == 0)
		return (NULL);
	k = word(str, c);
	tab = (char**)malloc(sizeof(char*) * (k + 1));
	if (tab == 0)
		return (NULL);
	while (i++ < k - 1)
	{
		while (*str == c)
			str++;
		s = ft_sizeifc(str, c);
		if (ft_memfill(str, tab, i, s) == 0)
			return (0);
		while (*str != c && *str != '\0')
			str++;
	}
	tab[i] = 0;
	return (tab);
}
