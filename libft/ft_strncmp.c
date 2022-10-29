/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:35:37 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:01:40 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int				i;
	unsigned long	j;

	j = 1;
	i = 0;
	while (str1[i] && str2[i])
	{
		if (n == j)
		{
			if (str1[i] == str2[i])
			{
				return (0);
			}
			else
				return (str1[i] - str2[i]);
		}
		i++;
		j++;
	}
	return (str1[i] - str2[i]);
}
