/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:35:05 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/22 10:44:21 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>
#include	<stdio.h>

char	*ft_allcheck(char *p)
{
	if (!p)
	{
		return (0);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	i += 1;
	str = malloc(i * sizeof(char));
	i = 0;
	while ((s[i] != c) || (s[i]))
	{
		if ((s[i] == c) || (s[i] == ',') || (s[i] == '.') || (s[i] == ';'))
		{
			break ;
		}
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	ft_allcheck(str);
	return (str);
}
