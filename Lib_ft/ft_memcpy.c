/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 15:13:20 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/13 15:38:46 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tdst;
	const char *tsrc;

	tdst = dst;
	tsrc = src;

	while (n-- > 0)
		*tdst++ = *tsrc++;
	return(dst);
}
