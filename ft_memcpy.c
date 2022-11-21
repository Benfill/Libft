/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:02:37 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/19 13:46:36 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	if (d == 0 && s == 0)
		return (d);
	if (d == s)
		return (s);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
