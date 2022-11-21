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

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dst[i] && n > i)
		i++;
	while (src[j] && i + j < n - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j + i != n)
		dst[j + i] = '\0';
	return (i + ft_strlen(src));
}
