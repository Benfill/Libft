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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dst);
	j = 0;
	while (n)
	{
		dst[i] = src[j];
		j++;
		i++;
		n--;
	}
	dst[i + j] = '\0';
	return (i + j);
}
