/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:16:01 by marferre          #+#    #+#             */
/*   Updated: 2022/09/15 16:19:06 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t items, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
int		ft_isprint(int p);
int		ft_isdigit(int n);
int		ft_isascii(int a);
int		ft_isalpha(int c);
int		ft_isalnum(int an);
int		ft_toupper(int tu);
int		ft_tolower(int tl);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);


#endif