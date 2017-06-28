/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 16:29:43 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/26 17:20:19 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *substr;

	i = 0;
	if (s == NULL)
		return (NULL);
	if(!(substr = ft_strnew(len)))
		return (NULL);
	while (len > 0)
	{
		substr[i] = s[i + start];
		i++;
		len--;
	}
	return (substr);
}
