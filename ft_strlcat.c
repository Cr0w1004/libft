/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:33:58 by alorru            #+#    #+#             */
/*   Updated: 2023/12/29 16:19:41 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t size )
{
	size_t	srcsize;
	size_t	i;
	size_t	j;
	size_t	dstsize;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize != '\0')
	{
		while (dst[j])
		{
			j++;
		}
		while ((src[i] != '\0') && i < (dstsize -1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (dstsize);
	}
}
