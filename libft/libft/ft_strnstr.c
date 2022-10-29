/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:28:43 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:02:56 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	int				i;
	unsigned long	j;
	const char		*ptr;

	i = 0;
	j = 0;
	while (big[i])
	{
		if (little[j] == big[i])
		{
			ptr = &big[i];
			while (little[j] == big[i] && n > j)
			{
				i++;
				j++;
			}
		}
		if (little[j] != '\0' && n > j)
		{
			j = 0;
			ptr = 0;
		}
		i++;
	}
	return (ptr);
}
