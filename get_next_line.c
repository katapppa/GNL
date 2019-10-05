/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgamora <cgamora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:24:35 by cgamora           #+#    #+#             */
/*   Updated: 2019/10/05 18:48:22 by cgamora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

struct	s_list
{
	char *list;
	struct s_list *next;
}		t_list;

int get_next_line(const int fd, char **line)
{
	char lane[20];

	read(fd, &lane, 40);
	printf("%s\n", lane);
	printf("%zd", read(fd, &lane, 40));
	close(fd);
	return (0);
}

int		main(void)
{
	int fd;
	char **fg;	
	fd = open("test1.txt", O_RDONLY, 0);
	get_next_line((const int)fd,fg);
	return (0);
}