/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 14:30:36 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/21 14:36:04 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strtrim(char const *s)
{
	int start;
	int stop;
	char *trimmedstr;

	start = ft_firstchar(s);
	stop = ft_lastchar(s);
	trimmedstr = ft_strsub(s, start, (stop - start + 1));

	return(trimmedstr);
}
