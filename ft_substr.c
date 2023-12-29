/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:55:20 by alorru            #+#    #+#             */
/*   Updated: 2023/12/27 16:50:09 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*resto;
	unsigned int	s_lung;

	i = 0;
	s_lung = ft_strlen(s);
	if (start > s_lung)
		return (ft_strdup(""));
	if (len > s_lung - start)
		len = s_lung - start;
	resto = (char *)malloc(sizeof(char) * (len + 1));
	if (!resto)
		return (NULL);
	while (i < len && s[start])
	{
		resto[i] = s[start];
		i++;
		start++;
	}
	resto[i] = '\0';
	return (resto);
}
