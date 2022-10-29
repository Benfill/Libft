/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:13:24 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:58:14 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				i;
	unsigned long	j;
	char			*s;
	char			*s2;

	i = 0;
	j = 1;
	s = (char *) str1;
	s2 = (char *) str2;
	while (i < n)
	{
		if (n == j)
		{
			return (s[i] - s2[i]);
		}
		i++;
		j++;
	}
	return (s[i] - s2[i]);
}
