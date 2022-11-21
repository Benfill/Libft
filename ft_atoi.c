/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:54:01 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/19 16:10:02 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	white_space(const char *str)
{
	int		i;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\r') || (str[i] == '\f') || (str[i] == '\v'))
			i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		sign;

	i = white_space(str);
	res = 0;
	sign = 1;
	if (str[i] == '+')
		++i;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}
