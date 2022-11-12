/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:31:36 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:01:03 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include <unistd.h>
#include <string.h>
#include 	"libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	char	*src;
	char	*dst;

	src = (char *) from;
	dst = (char *) to;
	if (dst > src && src + n > dst)
	{
		src = src + n - 1;
		dst = dst + n - 1;
		while(n--)
		{
			*dst-- = *src--;
		}
	}
	else
		while (n--)
		{
			*dst++ = *src++;
		}
	return (to);
}