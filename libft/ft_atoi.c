/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:38:45 by cgamora           #+#    #+#             */
/*   Updated: 2019/09/20 17:24:05 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	unsigned long long	n;
	int					b;

	i = 0;
	n = 0;
	b = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i]
			== '\r' || str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		b = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (unsigned long long)(10 * n + (str[i] - '0'));
		if (n > 9223372036854775807 && b == 1)
			return (-1);
		if (n > 9223372036854775807 && b == -1)
			return (0);
		i++;
	}
	return ((int)(b * n));
}
