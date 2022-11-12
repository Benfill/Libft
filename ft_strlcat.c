/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:00:11 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:56:51 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include	<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = j + i;
	j = 0;
	while (n > i + 1)
	{
		dst[i] = src[j];
		j++;
		i++;
		n--;
	}

	dst[i] = '\0';
	return (k);
}