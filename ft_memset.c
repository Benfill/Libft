/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:58:32 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:02:23 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned long	i;
	char			*str;

	i = 0;
	str = (char *)ptr;
	while (n > i)
	{
		str[i] = x;
		i++;
	}
	return (str);
}