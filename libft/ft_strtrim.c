/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:13:29 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:56:03 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int	my_strlen(char const *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
		{
			i++;
		}
		i++;
		j++;
	}
	return (j);
}

char	*white_space(char const *s1)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = my_strlen(s1);
	str = malloc(k * sizeof(char));
	while (s1[i])
	{
		while ((s1[i] == ' ') || (s1[i] == '\t') || (s1[i] == '\n'))
		{
			i++;
		}
		str[j] = s1[i];
		j++;
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;
	char	*tmp;

	i = my_strlen(set);
	j = 0;
	white_space(s1);
	tmp = malloc(i * sizeof(char));
	i = 0;
	while (s1[j])
	{
		while (s1[j] == set[i])
		{
			tmp[i] = s1[j];
			i++;
			j++;
		}
		j++;
	}
	if (!tmp)
	{
		return (0);
	}
	return (tmp);
}
