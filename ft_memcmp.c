/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:13:24 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/03 01:19:01 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	j;
	char			*s;
	char			*s2;

	i = 0;
	j = 1;
	k = 0;
	s = (char *) str1;
	s2 = (char *) str2;
	while (i < n)
	{
		j = s[i] - s2[i];
		k = k + j;
		i++;
	}
	if (ft_strlen(str1) > ft_strlen(str2))
		k = 1;
	return (k);
}