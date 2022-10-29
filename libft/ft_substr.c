/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:42:14 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:05:58 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
#include	<stdlib.h>
#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	i;
	char			*str;

	i = 0;
	str = malloc(len * sizeof(char));
	while (len > i)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	if (!str)
	{
		return (0);
	}
	return (str);
}
