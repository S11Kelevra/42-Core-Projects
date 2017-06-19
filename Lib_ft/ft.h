/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 18:51:17 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/19 16:26:45 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>

void 	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void 	*ft_memchr(const void *s, int c, size_t n);
void 	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void 	ft_memdel(void **ap);
void 	*ft_memalloc(size_t size);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void 	ft_strdel(char **as);
void 	ft_strclr(char *s);
char	ft_toupper(char c);
char	ft_tolower(char c);
char 	*ft_strnew(size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *big, const char *little);
char 	*ft_strcat(char *restrict s1, const char *restrict s2);
char 	*strncat(char *restrict s1, const char *restrict s2, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
int 	ft_isascii(int c);
int 	ft_strlen(char *str);
int		ft_isalpha(char c);
int 	ft_isdigit(char c);
int 	ft_isalnum(char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_isprint(unsigned char c);
