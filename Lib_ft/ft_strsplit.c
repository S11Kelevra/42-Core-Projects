/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 14:38:56 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/27 18:02:00 by eramirez         ###   ########.fr       */
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
	start = 0;
	if (s == 0 || c == 0)
		return (0);
	elements = ft_dlnwordcount(s, c);
	if(!(list = (char **)malloc(sizeof(char*) * (elements) + 1)))
		return(0);
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
