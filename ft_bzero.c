/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:17:48 by alorru            #+#    #+#             */
/*   Updated: 2023/12/27 15:16:09 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	i = 0;
	while (n--)
	{
		ptr[i] = 0;
		i++;
	}
}
