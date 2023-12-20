/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:41:08 by alorru            #+#    #+#             */
/*   Updated: 2023/12/18 11:37:21 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcaz(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;

    if (!dst || !src)
        return(0);
    srcsize = ft_strcaz(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < (dstsize -1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcsize);
}
