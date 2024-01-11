/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:38:16 by alorru            #+#    #+#             */
/*   Updated: 2024/01/11 14:32:23 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	**count(const char *s, char count)
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (s[i] != count)
		{
			occ++;
			while (s[i] != count && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (occ);
}

static	size_t	ft_strlenpower(const char *str, char count)
{
	int	i;

	i = 0;
	while (str[i] != count && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	**freemalloc(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

int	is_c(char check, char c)
{
	if (check == c || !check == '\0' )
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**split;

	split = ft_calloc((count(s, c) + 1), sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (i <= ft_strlen(s))
	{
		if ((is_c(s[i], c) && !is_c(s[i + 1], c)))
			start = i + 1;
		else if (!is_c(s[i], c) && is_c(s[i + 1], c))
		{
			split[j++] = ft_substr(s, start, i + 1 - start);
			if (!split[j - i])
				return (freemalloc(split, count(s, c)));
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
