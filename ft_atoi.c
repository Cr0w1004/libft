/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <alorru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:39:39 by alorru            #+#    #+#             */
/*   Updated: 2023/12/18 10:40:02 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	while ((str[i] >= 9 || str[i] <= 13)|| str[i] == ' ')
	{
		i++;
	}
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	res = 0;
	while (str[i] >= 0 && str[i] <= 9)
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (res * sign);
}
