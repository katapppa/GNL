/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:24:35 by cgamora           #+#    #+#             */
/*   Updated: 2019/10/31 16:29:25 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*prov_ost(char *ost, char **line)
{
	char			*fn;

	fn = NULL;
	if (ost)
	{
		if ((fn = ft_strchr(ost, '\n')))
		{
			*fn = '\0';
			*line = ft_strdup(ost);
			ft_strcpy(ost, ++fn);
		}
		else
		{
			*line = ft_strdup(ost);
			ft_strclr(ost);
		}
	}
	else
		*line = ft_strnew(1);
	return (fn);
}

int			get(const int fd, char **line, char *ost)
{
	char			buf[BUFF_SIZE + 1];
	char			*fn;
	char			*tmp;
	int				rb;

	fn = prov_ost(ost, line);
	while (!fn && (rb = read(fd, buf, BUFF_SIZE)))
	{
		buf[rb] = '\0';
		if ((fn = ft_strchr(buf, '\n')))
		{
			ft_strcpy(ost, ++fn);
			ft_strclr(--fn);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(tmp, buf)) || rb < 0)
			return (-1);
		ft_strdel(&tmp);
	}
	return (rb || ft_strlen(*line) || ft_strlen(ost) ? 1 : 0);
}

t_lest		*create(const int fd)
{
	t_lest			*new;

	new = (t_lest*)malloc(sizeof(t_lest));
	if (new == NULL)
		return (NULL);
	new->fd = fd;
	new->ost = ft_strnew(BUFF_SIZE);
	new->next = NULL;
	return (new);
}

int			get_next_line(const int fd, char **line)
{
	static t_lest	*head;
	t_lest			*tmp;

	if (fd < 0 || line == 0 || BUFF_SIZE < 0)
		return (-1);
	if (head == NULL)
		head = create(fd);
	tmp = head;
	while (tmp->fd != fd)
	{
		if (tmp->next == NULL)
			tmp->next = create(fd);
		tmp = tmp->next;
	}
	return (get(tmp->fd, line, tmp->ost));
}
