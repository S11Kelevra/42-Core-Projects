/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 10:43:16 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/06 14:47:54 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

int		bf_cv(t_bitfield piece, unsigned int x, unsigned int y)
{
	piece = ft_rshift(piece, (255 - (y * 16)) - x);
	return (piece.qd[3] % 2);
}

void	set_solution(t_bitfield piece)
{
	unsigned int x;
	unsigned int y;

	x = -1;
	y = 0;
	if (!g_solved)
	{
		g_solved = ft_strnew(g_bsize * g_bsize);
		while (++x < g_bsize * g_bsize)
			g_solved[x] = '.';
		g_solved[x] = '\0';
	}
	while (y <= g_bsize)
	{
		x = 0;
		while (x <= g_bsize)
		{
			if (bf_cv(piece, x, y))
				g_solved[(y * g_bsize) + x] = 'A' + g_npieces - 1;
			x++;
		}
		y++;
	}
	g_npieces--;
}
