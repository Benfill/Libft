/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:39:55 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/19 20:12:12 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long	i;
	char			*ptr;
	char			*ptr2;

	i = 0;
	ptr = (char *) str;
	ptr2 = 0;
	while (n > i)
	{
		if (ptr[i] == c)
		{
			ptr2 = &ptr[i];
			return (ptr2);
		}
		i++;
	}
	if (ptr2 == 0)
	{
		return (ptr2);
	}
	return (ptr2);
}
