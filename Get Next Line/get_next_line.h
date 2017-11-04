/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 19:34:19 by eramirez          #+#    #+#             */
/*   Updated: 2017/11/03 20:38:40 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/includes/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# define BUFF_SIZE 1
# define BUFFS (BUFF_SIZE + 1)
typedef struct		s_getnl
{
	int				fd;
	char			buff[BUFFS];
	struct s_getnl	*next;
}					t_getnl;
int	get_next_line(const int fd, char **line);
t_getnl *gnl_start(int fd, t_getnl *head);
char    *free_join(char *line, char const *buff);
void    str_snip(char *str, int snip);
int get_the_strap(const int fd, char **line, char *buff);
#endif
