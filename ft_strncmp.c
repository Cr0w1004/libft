/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:38:37 by alorru            #+#    #+#             */
/*   Updated: 2023/12/20 17:38:53 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
