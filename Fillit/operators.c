/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:50:42 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/06 14:46:00 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

t_bitfield	ft_or(t_bitfield a, t_bitfield b)
{
	unsigned int	quad;
	t_bitfield		res;

	quad = 0;
	res = ft_bfzero();
	while (quad < 4)
	{
		res.qd[quad] = (a.qd[quad] | b.qd[quad]);
		quad++;
	}
	return (res);
}

t_bitfield	ft_and(t_bitfield a, t_bitfield b)
{
	unsigned int	quad;
	t_bitfield		res;

	quad = 0;
	res = ft_bfzero();
	while (quad < 4)
	{
		res.qd[quad] = (a.qd[quad] & b.qd[quad]);
		quad++;
	}
	return (res);
}

int			ft_isequal(t_bitfield a, t_bitfield b)
{
	unsigned int quad;

	quad = 0;
	while (quad < 4)
	{
		if (a.qd[quad] != b.qd[quad])
			return (0);
		quad++;
	}
	return (1);
}

int			ft_ssqr(unsigned int npieces)
{
	unsigned int res;

	res = 2;
	while ((res * res) < (npieces * 4))
		res++;
	return (res);
}
