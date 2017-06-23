/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 14:38:56 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/21 19:03:51 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char **ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int elements;
	int start;
	char **list;

	i = 0;
	j = 0;
	elements = ft_dlnwordcount(s, c);
	list = (char **)ft_memalloc(elements + 1);
	while(j < elements)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		list[j] = ft_strsub(s, start, i - start);
		j++;
		i++;
	}
	list[j] = NULL;
	return (list);
}
