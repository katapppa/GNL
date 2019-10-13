/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:14:49 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/16 18:13:54 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*str;
	unsigned	i;
	unsigned	j;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(char*) * ft_strlen(haystack));
	if (str == NULL)
		return (str);
	str = (char *)haystack;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
			j++;
		if (needle[j] == '\0' && j != 0)
			return (&str[i]);
		i++;
	}
	if (needle[0] == '\0')
		return (&str[0]);
	return (NULL);
}
