/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 09:57:14 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/22 19:31:18 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *src)
{
	char *copy;

	copy = ft_strnew(ft_strlen(src));
	ft_strcpy(copy, src);
	return (copy);
}
