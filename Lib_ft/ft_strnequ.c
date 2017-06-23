/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 15:45:49 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/20 15:49:08 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int i;
    i = 0;
    if(s1 == NULL && s2 == NULL)
        return(0);
    while (s1[i] == s2[i])
    {
        if(s1[i] == 0 && s2[i] == 0 && n--)
            return (1);
        i++;
    }
    return (0);
}
