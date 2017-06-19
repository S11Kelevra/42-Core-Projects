/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:54:13 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/19 14:58:27 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	int remainder;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putnbr(nb / 10);
			ft_putchar('8');
			return ;
		}
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		remainder = nb % 10;
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(remainder + 48);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
}
