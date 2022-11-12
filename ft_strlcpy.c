/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:30:56 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:57:24 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include	<unistd.h>
#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = (char *) dst;
	if (n != 0 && src != '\0')
	{
		while (n > 1)
		{
			n--;
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	j = ft_strlen(src);
	return (j);
}
