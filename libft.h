/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:51:28 by alorru            #+#    #+#             */
/*   Updated: 2023/12/20 15:39:05 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);
char *ft_strncmp(char *s1, char *s2, unsigned int n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	*ft_isprint(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void *ft_memset(void *s, int c, size_t n);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

#endif