/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:44:05 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 14:56:14 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_atoi(const char *str);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_itoa(int n);
char			**ft_split(const char *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *haystack, \
		const char *needle, unsigned int len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_substr(const char *s, unsigned int start, unsigned int len);
void			ft_bzero(void *s, unsigned int n);
void			*ft_calloc(unsigned int count, unsigned int size);
void			*ft_memccpy(void *restrict dst, \
		const void *restrict src, int c, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
void			*ft_memcpy(void *restrict dst, \
		const void *restrict src, unsigned int n);
void			*ft_memmove(void *dst, const void *src, unsigned int len);
void			*ft_memset(void *b, int c, unsigned int len);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
unsigned int	ft_strlcat(char *restrict dst, \
		const char *restrict src, unsigned int dstsize);
unsigned int	ft_strlcpy(char *restrict dst, \
		const char *restrict src, unsigned int dstsize);
unsigned int	ft_strlen(const char *s);

#endif
