/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:55:01 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/07 21:50:03 by eramirez         ###   ########.fr       */
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

int		valid_format(char *input)
{
	char	buff[22];
	int		fd;
	int		i;

	if (!(fd = open(input, O_RDONLY)))
		return (0);
	i = 21;
	while (i == 21)
	{
		i = read(fd, buff, 21);
		if (i != 21)
			break ;
		if (buff[20] != '\n' && !new_lines(buff))
			return (0);
	}
	if (i == 20)
	{
		i = read(fd, buff, 20);
		if (!new_lines(buff))
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
	t_bitfield	test;

	zero_gpieces();
	if (!(valid_format(argv[1])))
	{
		ft_errormsg(0);
		return (0);
	}
	if (!(input = ft_read(argv[1], g_str)) || argc != 2)
	{
		ft_errormsg(0);
		return (0);
	}
	else
	{
		ft_errormsg(ft_isvalid(input));
		test = ft_bfzero();
		ft_fillit(test);
		print_sol();
	}
	return (0);
}
