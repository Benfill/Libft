/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:31:36 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/19 12:44:29 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *to, const void *from, size_t n)
{
	char	*src;
	char	*dst;

	src = (char *) from;
	dst = (char *) to;
	while (n > 0)
	{
		*dst++ = *src++;
		n--;
	}
	return (dst);
}
