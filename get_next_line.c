/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:24:35 by cgamora           #+#    #+#             */
/*   Updated: 2019/10/13 19:21:33 by cgamora          ###   ########.fr       */
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

int			get(const int fd, char **line, char **ost)
{
	char			buf[BUFF_SIZE + 1];
	char			*fn;
	char			*tmp;
	int				rb;

	fn = prov_ost(*ost, line);
	while (!fn && (rb = read(fd, buf, BUFF_SIZE)))
	{
		buf[rb] = '\0';
		if ((fn = ft_strchr(buf, '\n')))
		{
			*fn = '\0';
			fn++;
			*ost = ft_strdup(fn);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)) || rb < 0)
			return (-1);
		free(tmp);
	}
	return (rb || ft_strlen(*line) ? 1 : 0);
}

t_lest		*create(int fd)
{
	t_lest			*new;

	new = (t_lest*)malloc(sizeof(t_lest));
	if (new == NULL)
		return (NULL);
	new->fd = fd;
	new->ost = NULL;
	new->next = NULL;
	return (new);
}

int			get_next_line(const int fd, char **line)
{
	static t_lest	*head;
	t_lest			*tmp;

	if (fd < 0 || line == 0)
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
	return (get(tmp->fd, line, &tmp->ost));
}

int        main(void)
{
	int        fd;
	int        fd2;
	int        count;
	char    *line;

	count = 0;
	fd = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	while (get_next_line(fd, &line) && count < 3)
	{
		printf("%s\n\n",line);
		count++;
	}
	while (get_next_line(fd2, &line) && count < 6)
	{
		printf("%s\n\n",line);
		count++;
	}
	while (get_next_line(fd, &line) && count < 9)
	{
		printf("%s\n\n",line);
		count++;
	}
}
