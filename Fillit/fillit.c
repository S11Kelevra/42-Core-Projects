/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:23:21 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/06 14:25:21 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

t_bitfield	bf_bounds(int size)
{
	int			i;
	t_bitfield	res;

	i = -1;
	res = ft_bfzero();
	res.qd[0] = HLINE;
	res = ft_rshift(res, (16 * size));
	while (++i < 4)
		res.qd[i] |= VLINE >> size;
	return (res);
}

int			if_it_fits(t_bitfield *board, t_bitfield piece,
		int i, unsigned int shift)
{
	if (!ISUSED(i) && (ft_isequal(ft_and(ft_rshift(piece, shift),
						bf_bounds(g_bsize)), ft_bfzero()) == 1))
	{
		if (!ISUSED(i) && (ft_isequal(ft_and(ft_rshift(piece, shift),
							*board), ft_bfzero()) == 1))
		{
			g_flags[i] = USED;
			if (ft_solve(ft_or(*board, ft_rshift(piece, shift))) == 0)
				g_flags[i] = UNUSED;
			else
			{
				set_solution(ft_rshift(piece, shift));
				return (1);
			}
		}
	}
	return (0);
}

int			ft_solve(t_bitfield board)
{
	int				i;
	unsigned int	shift;
	t_bitfield		piece;

	i = 0;
	shift = 0;
	piece = ft_bfzero();
	while (g_flags[i] != 0)
	{
		piece.qd[0] = g_pieces[i];
		if (if_it_fits(&board, piece, i, shift) == 1)
			return (1);
		if (!ISUSED(i))
		{
			if (shift > 16 * (g_bsize - 1) + g_bsize)
				return (0);
			if (shift % 16 == g_bsize - 1)
				shift = (shift - g_bsize) + 16;
			shift++;
		}
		else
			i++;
	}
	return (1);
}

int			ft_fillit(t_bitfield board)
{
	int size;

	size = 0;
	board = ft_bfzero();
	g_bsize = ft_ssqr(g_npieces);
	while (g_bsize < 16)
	{
		if (ft_solve(board) == 1)
			break ;
		g_bsize++;
	}
	return (0);
}
