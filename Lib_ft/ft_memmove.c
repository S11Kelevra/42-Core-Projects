/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 15:33:31 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/13 15:39:20 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *tdst;
	const char *tsrc;

	tdst = dst;
	tsrc = src;

	while(n-- > 0)
		tdst[n] = tsrc[n];
	return(dst);
}
