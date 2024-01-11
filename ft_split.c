/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:38:16 by alorru            #+#    #+#             */
/*   Updated: 2024/01/11 11:36:39 by alorru           ###   ########.fr       */
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

static char **ft_procedure(char **str, int *i, char *s, char oc)
{
	
}


char **ft_split(char const *s, char c)
{
	
}
