/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 15:30:04 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/21 20:13:14 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memalloc(size_t size)
{
	unsigned char *str;
	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(unsigned char));
	ft_bzero(str, size);
	return ((void *)str);
}
