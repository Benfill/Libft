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
#include	<stdio.h>

char    *ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*ptr;
	char	*tmp;
	
	i = ft_strlen(str);
	tmp = (char *) str;
	ptr = NULL;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			j = i;
			ptr = &tmp[j];
			break;
		}
		i--;
	}
	return (ptr);
}