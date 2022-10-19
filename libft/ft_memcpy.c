/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:02:37 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/19 20:15:24 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	while (n > i && s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
