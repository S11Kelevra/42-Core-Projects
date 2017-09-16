/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:55:01 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/14 19:49:31 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

void	print_sol(void)
{
	int j;
	int k;

	k = 1;
	j = 0;
	while (g_solved[j])
	{
		ft_putchar(g_solved[j]);
		if (k % g_bsize == 0)
			ft_putchar('\n');
		j++;
		k++;
	}
}

int		new_lines(char *buff)
{
	if (buff[4] != '\n' || buff[9] != '\n' ||
			buff[14] != '\n' || buff[19] != '\n')
		return (0);
	return (1);
}

int		valid_format(int fd)
{
	int	i;

	i = 21;
	while (i == 21)
	{
		i = read(fd, g_vbuff, 21);
		if (i != 21)
			break ;
		g_vbuff[21] = '\0';
		if (g_vbuff[20] != '\n' || !new_lines(g_vbuff))
			return (0);
	}
	if (i == 20)
	{
		i = read(fd, g_vbuff, 20);
		g_vbuff[20] = '\0';
		if (!new_lines(g_vbuff))
			return (0);
	}
	else
		return (0);
	close(fd);
	return (1);
}

void	zero_gpieces(void)
{
	int	i;

	i = 0;
	while (i < 27)
	{
		g_pieces[i] = 0x0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char		**input;
	int			fd;
	t_bitfield	test;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0 || argc != 2)
	{
		ft_errormsg(0);
		return (0);
	}
	if (!(valid_format(fd)) || !(input = ft_read(argv[1], g_str)) ||
			ft_isvalid(input) != 1)
	{
		ft_errormsg(0);
		return (0);
	}
	else
	{
		test = ft_bfzero();
		ft_fillit(test);
		print_sol();
	}
	return (0);
}
