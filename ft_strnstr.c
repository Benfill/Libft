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

int	ft_index_i(const char *big, const char *little, size_t n)
{
	unsigned int	i;
	int				k;

	i = 0;
	k = 0;
	while (big[i] && n > i)
	{
		if (big[i] == little[k])
		{
			i++;
			k++;
		}
		else
			i++;
		if (little[k] == '\0')
			break ;
		if (big[i] != little[k])
		k = 0;
	}
	i = i - k;
	if (k == 0)
		i = 0;
	return (i);
}

int	ft_index_k(const char *big, const char *little, size_t n)
{
	unsigned int	i;
	int				k;

	i = 0;
	k = 0;
	while (big[i] && n > i)
	{
		if (big[i] == little[k])
		{
			i++;
			k++;
		}
		else
			i++;
		if (little[k] == '\0')
			break ;
		if (big[i] != little[k])
		k = 0;
	}
	return (k);
}

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned int	i;
	int				k;
	char			*tmp;
	char			*ptr;

	tmp = (char *) big;
	ptr = 0;
	i = ft_index_i(big, little, n);
	k = ft_index_k(big, little, n);
	if (little[k] == '\0')
	{
		ptr = &tmp[i];
	}
	else
		ptr = 0;
	return (ptr);
}
