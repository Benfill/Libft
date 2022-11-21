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
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	char			*s;
	char			*s2;

	i = 0;
	s = (char *) str1;
	s2 = (char *) str2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s[i] - s2[i] != 0)
			return ((unsigned char)s[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
