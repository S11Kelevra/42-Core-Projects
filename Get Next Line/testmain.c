/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:39:21 by eramirez          #+#    #+#             */
/*   Updated: 2017/11/01 14:51:20 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	int tmp;
	int i;
	int fd;
	char *line;
	char *line2;
	char *line3;
	char *line4;
	tmp = argc;
	fd = open(argv[1], O_RDONLY);
	i = get_next_line(fd, &line);
	i = get_next_line(fd, &line2);
	i = get_next_line(fd, &line3);
	i = get_next_line(fd, &line4);
	printf("Line 1:''%s''\nLine 2:''%s''\nLine 3:''%s''\nLine 4:''%s''\n", 
			line, line2, line3, line4);
	close(fd);
	return(0);
}
