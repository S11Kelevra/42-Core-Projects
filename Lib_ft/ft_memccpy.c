/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:39:58 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/13 17:05:22 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char *tdst;
	const char *tsrc;
	size_t i;

	i = 0;
	tdst = dst;
	tsrc = src;

	while (i++ < n && tsrc[i] != c)
		*tdst++ = *tsrc++;
	return(tdst);
}
