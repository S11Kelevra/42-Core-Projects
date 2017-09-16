/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 19:05:40 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/14 16:09:24 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "preperation.h"

void	ft_setvalid(void)
{
	int i;

	i = -1;
	while (++i < 20)
		ft_bzero(g_chrb[i], sizeof(g_chrb[i]));
	ft_strcpy(g_chrb[0], "##...##");
	ft_strcpy(g_chrb[1], "#....#....#....#");
	ft_strcpy(g_chrb[2], "####");
	ft_strcpy(g_chrb[3], "##....##");
	ft_strcpy(g_chrb[4], "#...##...#");
	ft_strcpy(g_chrb[5], "##..##");
	ft_strcpy(g_chrb[6], "#....##....#");
	ft_strcpy(g_chrb[7], "###...#");
	ft_strcpy(g_chrb[8], "#...##....#");
	ft_strcpy(g_chrb[9], "#....##...#");
	ft_strcpy(g_chrb[10], "#...###");
	ft_strcpy(g_chrb[11], "#....#...##");
	ft_strcpy(g_chrb[12], "#....###");
	ft_strcpy(g_chrb[13], "##...#....#");
	ft_strcpy(g_chrb[14], "###....#");
	ft_strcpy(g_chrb[15], "#....#....##");
	ft_strcpy(g_chrb[16], "###..#");
	ft_strcpy(g_chrb[17], "##....#....#");
	ft_strcpy(g_chrb[18], "#..###");
}

void	ft_set_ghexb(void)
{
	g_hexb[0] = 0xC000C00000000000;
	g_hexb[1] = 0x8000800080008000;
	g_hexb[2] = 0xF000000000000000;
	g_hexb[3] = 0xC000600000000000;
	g_hexb[4] = 0x4000C00080000000;
	g_hexb[5] = 0x6000C00000000000;
	g_hexb[6] = 0x8000C00040000000;
	g_hexb[7] = 0xE000400000000000;
	g_hexb[8] = 0x4000C00040000000;
	g_hexb[9] = 0x8000C00080000000;
	g_hexb[10] = 0x4000E00000000000;
	g_hexb[11] = 0x40004000C0000000;
	g_hexb[12] = 0x8000E00000000000;
	g_hexb[13] = 0xC000800080000000;
	g_hexb[14] = 0xE000200000000000;
	g_hexb[15] = 0x80008000C0000000;
	g_hexb[16] = 0xE000800000000000;
	g_hexb[17] = 0xC000400040000000;
	g_hexb[18] = 0x2000E00000000000;
}

int		ft_check(char *input, char valid[20][17])
{
	int i;

	i = 0;
	while (i < 19)
	{
		if (ft_strcmp(input, valid[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_isvalid(char **input)
{
	int i;
	int gp;

	i = -1;
	gp = 0;
	ft_setvalid();
	ft_set_ghexb();
	g_pieces = malloc(sizeof(ULL) * g_npieces + 1);
	while (input[++i] != 0)
	{
		if (ft_check(input[i], g_chrb) == -1)
			return (0);
		else
		{
			g_pieces[gp] = g_hexb[ft_check(input[i], g_chrb)];
			gp++;
		}
	}
	g_flags = ft_strnew(gp);
	i = -1;
	while (++i < gp)
		g_flags[i] = UNUSED;
	return (1);
}
