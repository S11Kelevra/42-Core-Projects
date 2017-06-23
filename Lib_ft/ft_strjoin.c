/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 13:23:36 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/20 13:32:04 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	int len;
	char *joined;

	i = 0;
	j = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	joined = ft_strnew(len);

	while (s1[i])
	{
		joined[j] = s1[i];
		i++;
		j++;
	}

	i = 0;
	while (s2[i])
	{
		joined[j] = s2[i];
		i++;
		j++;
	}
	return (joined);
}
