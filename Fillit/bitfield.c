/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitfield.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:34:47 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/06 14:44:16 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

t_bitfield	ft_bfzero(void)
{
	t_bitfield result;

	result.qd[0] = 0;
	result.qd[1] = 0;
	result.qd[2] = 0;
	result.qd[3] = 0;
	return (result);
}

void		ft_shifty(t_bitfield *piece, unsigned int quad, unsigned int n)
{
	while (quad < 4)
	{
		if (quad - 1 < 4)
		{
			piece->qd[quad] = (piece->qd[quad] >> n) +
				(piece->qd[quad - 1] << (64 - n));
		}
		else
			piece->qd[quad] = (piece->qd[quad] >> n);
		quad--;
	}
}

t_bitfield	ft_rshift(t_bitfield piece, unsigned int n)
{
	t_bitfield		newp;
	unsigned int	qdshift;
	unsigned int	i;

	qdshift = n / 64;
	n = n % 64;
	i = 0;
	newp = ft_bfzero();
	while (qdshift < 4)
	{
		newp.qd[qdshift] = piece.qd[i];
		qdshift++;
		i++;
	}
	if (n == 0)
		return (newp);
	else
	{
		ft_shifty(&newp, 3, n);
		return (newp);
	}
}
