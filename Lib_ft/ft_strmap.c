/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 17:33:45 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/19 17:49:40 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char *mpstr;
	char *str;
	int size;

	if (s == NULL || f == NULL)
		return (0);
	str = (char *)s;
	size = ft_strlen(s);
	mpstr = malloc(size * sizeof(unsigned char) + 1);
	ft_bzero(mpstr, size + 1);
	while (*str)
		*mpstr++ = f(*str++);
	return (mpstr);
}
