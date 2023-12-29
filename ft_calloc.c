/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:01:27 by alorru            #+#    #+#             */
/*   Updated: 2023/12/27 15:28:53 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t num, size_t size)
{
	size_t	totdim;
	void	*ptr;

	totdim = num * size;
	ptr = malloc(totdim);
	if (!ptr)
		return (NULL);
	if (ptr)
		memset(ptr, 0, totdim);
	return (ptr);
}
