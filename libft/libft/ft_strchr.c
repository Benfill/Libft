/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:01:22 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:00:03 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;
	char		a;
	char		*ptr;

	ptr = NULL;
	i = 0;
	a = c;
	while (str[i])
	{
		if (str[i] == a)
		{
			ptr[i] = str[i];
			return (ptr);
		}
		i++;
	}
	if (ptr == NULL)
	{
		return (ptr);
	}
	return (ptr);
}
