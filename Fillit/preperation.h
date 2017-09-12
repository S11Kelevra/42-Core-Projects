/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preperation.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 11:35:00 by eramirez          #+#    #+#             */
/*   Updated: 2017/09/06 15:20:51 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREPERATION_H
# define PREPERATION_H

# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# define ISUSED(c) (g_flags[c] == USED)
# define USED '2'
# define UNUSED '1'
# define ULL unsigned long long
# define HLINE 0xFFFF000000000000
# define VLINE 0x8000800080008000

char			*g_solved;
char			g_buff[1];
char			g_str[10000];
char			g_chrb[20][17];
char			*g_flags;
unsigned int	g_npieces;
unsigned int	g_bsize;
ULL				g_hexb[19];
ULL				g_pieces[27];

typedef struct	s_bitfield
{
	ULL qd[4];
}				t_bitfield;

char			**ft_read(char *file, char *str);
int				bf_cv(t_bitfield piece, unsigned int x, unsigned int y);
int				ft_isvalid(char **input);
int				ft_isequal(t_bitfield a, t_bitfield c);
int				ft_ssqr(unsigned int npieces);
int				ft_solve(t_bitfield board);
int				ft_fillit(t_bitfield board);
void			set_solution(t_bitfield piece);
void			ft_set_ghexb(void);
void			ft_setvalid(void);
void			ft_errormsg(int ret);
void			ft_shifty(t_bitfield *piece, unsigned int quad, unsigned int n);
void			printb(t_bitfield board);
t_bitfield		bf_bounds(int size);
t_bitfield		ft_bfzero(void);
t_bitfield		ft_rshift(t_bitfield piece, unsigned int n);
t_bitfield		ft_or(t_bitfield a, t_bitfield b);
t_bitfield		ft_and(t_bitfield a, t_bitfield c);

#endif
