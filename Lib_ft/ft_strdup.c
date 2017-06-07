/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:57:14 by eramirez          #+#    #+#             */
/*   Updated: 2017/01/19 12:04:17 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strsize(char *str)
{
	int bytes;

	bytes = 0;
	if (str[0] == '\0')
		return (0);
	while (str[bytes])
	{
		bytes++;
	}
	return (bytes + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *copy;

	copy = (char*)malloc(ft_strsize(src));
	ft_strcpy(copy, src);
	return (copy);
}
