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

int	ft_results(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((str2[i]) || (str1[i]))
	{
		if (i < n)
		{
			if (str1[i] == str2[i])
				j = j + 0;
			else if (str1[i] > str2[i])
				j = j + 1;
			else if (str1[i] < str2[i])
				j = j - 1;
		}
		i++;
	}
	return (j);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	j;

	j = ft_results(str1, str2, n);
	if (j > 0)
	{
		j = 1;
	}
	if ((ft_strlen(str1) == 0) || (ft_strlen(str1) < ft_strlen(str2)))
		j = -1;
	else if (j == 0)
		j = 0;
	else if (j < 0)
		j = -1;
	return (j);
}
