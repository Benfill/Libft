/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:42:14 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/08 23:09:03 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include	<stdlib.h>
#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	j;
	char			*str;

	i = 0;
	k = start;
	str = (char *) malloc(len * sizeof(char) + 1);
	while (len > i)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	j = ft_strlen(str);
	if (j < k)
	{
		*str = '\0';
	}
	else
		return (str);
	return (str);
}