/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:10:12 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:54:49 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	char		a;
	const char	*ptr;

	ptr = 0;
	i = ft_strlen(str);
	a = c;
	while (i != 0)
	{
		if (str[i] == a)
		{
			ptr = &str[i];
			return (ptr);
		}
		i--;
	}
	if (ptr == 0)
	{
		return (ptr);
	}
	return (ptr);
}
