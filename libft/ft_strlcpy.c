/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:30:56 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/19 13:39:12 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (n > 1)
	{
		n--;
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i + j);
}
