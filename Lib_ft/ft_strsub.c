/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 16:29:43 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/21 19:18:20 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *substr;

	i = 0;
	substr = ft_strnew(len);
	while (len > 0)
	{
		substr[i] = s[i + start];
		i++;
		len--;
	}
	return (substr);
}
