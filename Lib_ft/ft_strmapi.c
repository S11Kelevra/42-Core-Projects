/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 18:00:47 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/19 18:29:33 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *mpstr;
	char *str;
	int size;
	unsigned int i;

	if (s == NULL || f == NULL)
		return(0);
	i = 0;
	str = (char *)s;
	size = ft_strlen(s);
	mpstr = malloc(size * sizeof(unsigned char) + 1);
	ft_bzero(mpstr, size + 1);
	while (str[i])
	{
		mpstr[i] = f(i, s[i]);
		i++;
	}
	return(mpstr);
}
