/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:26:48 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/16 20:10:25 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	char		*ssr;
	size_t		i;

	str = (char*)malloc(len + 1);
	ssr = (char*)s;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (len)
	{
		str[i] = ssr[start];
		start++;
		i++;
		len--;
	}
	str[i] = '\0';
	return ((char*)str);
}
