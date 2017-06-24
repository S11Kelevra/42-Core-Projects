/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 15:13:46 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/23 00:08:25 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_itoa(int n)
{
	int demdigits;
	int lendiggies;
	char *datascii;

	demdigits = n;
	lendiggies = ft_lendigits(demdigits);
	printf("%i\n", lendiggies);

	if (n == 0)
		return("0");
	if (n < 0)
	{
		lendiggies++;
		demdigits = -demdigits;
		datascii = ft_strnew(lendiggies);
		datascii[0] = '-';
	}
	else
		datascii = ft_strnew(lendiggies);

	while (lendiggies > 0)
	{
		datascii[lendiggies - 1] = (demdigits % 10) + 48;
		demdigits /= 10;
		lendiggies--;
	}
	printf("%s\n", datascii);
	return (datascii);
}
