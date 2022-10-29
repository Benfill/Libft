/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:34 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:06:58 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *to, const void *from, size_t n);

void	*ft_memset(void *ptr, int x, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int	ft_memcmp(const void *str1, const void *str2, size_t n);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *s);

void	*ft_calloc(size_t count, size_t size);

void	ft_bzero(void *s, size_t n);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t n);

int	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int	ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t n);

char	*ft_strrchr(const char *str, int c);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_tolower(int c);

int	ft_toupper(int c);

int	ft_isascii(int c);

int	isalnum(int argument);

int	ft_isalpha(char alpha);

int	ft_isdigit(int arg);

int	ft_isprint(int c);

char	*ft_itoa(int n);

int	ft_atoi(const char *str);
