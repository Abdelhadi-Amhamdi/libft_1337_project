/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:26:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 10:14:54 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdio.h>

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int n);
int		ft_isprint(int c);
size_t	ft_strlen(const char *tab);
void	*ft_memset(void *dest, int ch, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *restrict des, const char *restrict src, size_t len);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *src, const char *to_find, size_t len);
int		ft_atoi(const char *s);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char *set);

#endif