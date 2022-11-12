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
	int		i;
	char	*ptr;
	char	*tmp;

	tmp = (char *) str;
	ptr = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			ptr = &tmp[i];
			break;
		}
		i++;
	}
	i = ft_strlen(str);
	if (c == '\0')
	{
		ptr = &tmp[i];
	}
	return (ptr);
}
