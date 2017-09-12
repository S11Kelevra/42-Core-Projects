/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 14:57:59 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/06 14:31:48 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

int		ft_dfchar(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] == c && str[i])
		i++;
	return (i);
}

int		ft_dlchar(const char *str, char c)
{
	int i;

	i = ft_strlen(str) - 1;
	while (str[i] == c && i > 0)
		i--;
	return (i);
}

char	*ft_dstrtrim(char const *s, char c)
{
	int		start;
	int		stop;
	char	*trimmedstr;

	if (!s)
		return (0);
	start = ft_dfchar(s, c);
	stop = ft_dlchar(s, c);
	if (start > stop)
		return (ft_strdup(""));
	if (!(trimmedstr = ft_strsub(s, start, (stop - start + 1))))
		return (0);
	return (trimmedstr);
}

void	ft_nlstar(char *str, int eos)
{
	int i;

	i = 20;
	while (i <= eos)
	{
		if (str[i] == '\n')
			str[i] = '*';
		i = i + 21;
	}
}

char	**ft_read(char *file, char *g_str)
{
	int		fd;
	int		i;
	char	**lst;

	i = -1;
	ft_bzero(g_buff, 1);
	ft_bzero(g_str, 10000);
	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	while (read(fd, g_buff, 1) != 0)
		g_str[++i] = g_buff[0];
	close(fd);
	ft_nlstar(g_str, i);
	i = 1;
	while (++i < (int)ft_strlen(g_str))
	{
		if (g_str[i] == '\n')
			g_str[i] = '.';
	}
	lst = ft_strsplit(g_str, '*');
	i = -1;
	while (lst[++i] != 0)
		lst[i] = ft_dstrtrim(lst[i], '.');
	return (lst);
}
