/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 18:51:17 by eramirez          #+#    #+#             */
/*   Updated: 2017/06/22 23:35:27 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
 #define LIBFT_H

#include<stdlib.h>
#include<stddef.h>
#include<unistd.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size);
void 	*ft_memset(void *b, int c, size_t len);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void 	*ft_memchr(const void *s, int c, size_t n);
void 	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void 	*ft_memalloc(size_t size);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void 	ft_striter(char *s, void (*f)(char *));
void 	ft_striteri(char *s, void (*f)(unsigned int, char *));
void 	ft_memdel(void **ap);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	fr_putendl(char const *s);
void 	ft_strdel(char **as);
void 	ft_strclr(char *s);
void 	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s,int fd);
void	ft_putendl_fd(char const *s,int fd);
void    ft_putnbr_fd(int n, int fd);
int 	ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strstri(const char *big, const char *little);
char 	*ft_strnew(size_t size);
char    *ft_strdup(const char *src);
char	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char 	*ft_strcat(char *s1, const char *s2);
char 	*ft_strncat(char *s1, const char *s2, size_t n);
char 	*ft_strmap(char const *s, char (*f)(char));
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strjoin(char const *s1, char const *s2);
char 	*ft_itoa(int n);
char 	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int 	ft_wordcount(char const *str);
int 	ft_dlnwordcount(char const *str, char c);
int 	ft_iswhsp(const char c);
int		ft_firstchar(const char *str);
int		ft_lastchar(const char *str);
int 	ft_lendigits(int demdigits);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
int 	ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_skipws(char *str);
int 	ft_isascii(int c);
int 	ft_strlen(const char *str);
int		ft_isalpha(int c);
int 	ft_isdigit(char c);
int 	ft_isalnum(int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_isprint(int c);

#endif
