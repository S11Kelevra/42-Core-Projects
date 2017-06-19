/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:06:16 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/13 16:36:50 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char find;
	unsigned char *str;
	find = (unsigned char)c;
	str = (unsigned char*)s;

	while (str != 0 && n-- > 0)
	{
		if (*str == find)
			return (str);
		str++;
	}
	return (str);
}
