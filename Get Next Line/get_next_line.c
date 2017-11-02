/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 19:33:45 by eramirez          #+#    #+#             */
/*   Updated: 2017/11/02 16:46:30 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int		find_nl(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n')
			return (i);
	}
	return (-1);
}

void	str_snip(char *str, int snip)
{
	int i;
	char temp[BUFFS];

	i = 0;
	snip++;
	ft_strcpy(temp, str);
	ft_bzero(str, BUFFS);
	while (temp[snip])
	{
		str[i] = temp[snip];
		i++;
		snip++;
	}
}

int	get_the_strap(const int fd, char **line, char *buff)
{
	int i;

	i = 0;
	while ((i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		*line = ft_strjoin(*line, buff);
		if (ft_strchr(*line, '\n'))
		{
			*line = ft_strsub(*line, 0, find_nl(*line));
			str_snip(buff, find_nl(buff));
			return(1);
		}
		else if (i < BUFF_SIZE)
		{
			ft_bzero(buff, BUFFS);
			return(1);
		}
		ft_bzero(buff, BUFFS);
	}
	if (i < 0)
		return(-1);
	return(0);
}
int	get_next_line(const int fd, char **line)
{
	static char buff[BUFFS];
	int i;
	
	i = 0;;
	if (!line || fd < 0)
		return (-1);
	if (buff[0])
	{
		if ((i = find_nl(buff)) >= 0)
		{
			*line = ft_strsub(buff, 0, i);
			str_snip(buff, i);
			return(1);
		}
		*line = ft_strdup(buff);
		ft_bzero(buff, BUFFS);
	}
	else
		*line = ft_strdup("");
	return (gnl(fd, line, buff));
}
