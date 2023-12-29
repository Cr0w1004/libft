/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:28 by alorru            #+#    #+#             */
/*   Updated: 2023/12/29 14:04:09 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int	ft_strlen(char *str);
char	*ft_strncmp(char *s1, char	*s2, unsigned int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	*ft_isprint(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	strnstr(const char *big, const char *little, size_t len);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strrchr(const char *s, int c);
char	*strchr(const char *s, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	bzero(void *dst, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*calloc(size_t num, size_t size);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
#endif