/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 18:51:17 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/13 14:40:14 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void 	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *big, const char *little);
char 	*ft_strcat(char *restrict s1, const char *restrict s2);
char 	*strncat(char *restrict s1, const char *restrict s2, size_t n);
int 	ft_isascii(int c);
int 	ft_strlen(char *str);
int		ft_isalpha(char c);
int 	ft_isdigit(char c);
int 	ft_isalnum(char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_isprint(unsigned char c);
