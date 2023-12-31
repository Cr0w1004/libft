/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:38:31 by alorru            #+#    #+#             */
/*   Updated: 2023/12/29 16:18:23 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	strnstr(const char	*big, const char	*little, size_t	len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			i = 1;
			while (j < little_len && i + j < len && big[i + j] == little[j])
			{
				j++;
			}
			if (j == little_len)
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}
