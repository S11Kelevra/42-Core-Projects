/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:01:23 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/07 12:16:51 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main(void)
{
	char upc = 'A';
	char lc = 'a';
	char teststr1[]="hello";
	char teststr2[]="goodbye";

	if (ft_isalpha('1') == 0)
		printf("1 is not alpha\n");
	if (ft_isalpha('K') == 1)
		printf("K is alpha\n");

	if (ft_isdigit('1') == 1)
		printf("1 is a digit\n");
	if (ft_isdigit('K') == 0)
		printf("K is not a digit\n");

	if (ft_isalnum('1') == 1)
		printf("1 is alphanum\n");
	if (ft_isalnum('K') == 1)
		printf("K is alphanum\n");
	if (ft_isalnum('&') == 0)
		printf("& is not alphanum\n");

	if (ft_isprint('K') == 1)
		printf("K is printable\n");
	if (ft_isprint(0) == 0)
		printf("Null is not printable\n");

	printf("%c uppercase is %c\n", lc, ft_toupper(lc));
	printf("%c uppercase is %c\n", upc, ft_toupper(upc));

	printf("%c lowercase is %c\n", lc, ft_tolower(lc));
	printf("%c lowercase is %c\n", upc, ft_tolower(upc));

	printf("%s is %i characters\n", teststr1, ft_strlen(teststr1));
	printf("%s is %i characters\n", teststr2, ft_strlen(teststr2));

	printf("Looking for %i in %s, found @ %c.\n", 
			108, teststr1, *ft_strchr(teststr1, 108);
	return 0;
}
