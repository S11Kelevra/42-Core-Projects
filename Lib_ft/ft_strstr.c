/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:00:32 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/08 14:32:49 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	char *loc;
	
	i = 0;
	j = 0;
	loc = (char *)big;

	if (little[0] == 0)
		return (loc);
	while (big[i] != little[j])
	{
		i++;
		j = 0;
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == 0)
				return (loc + i - j);
			if (big[i] == 0)
				return (0);
		}
	}
	return (0);
}
