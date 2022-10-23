/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:31:02 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/22 08:55:25 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*str;

	i = 0;
	str = (char *)s;
	while (n > i)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
	{
		return (ptr);
	}
	ft_bzero(ptr, count * size);
	if (!ptr)
	{
		return (0);
	}
	return (ptr);
}
