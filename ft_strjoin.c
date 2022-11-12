/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:15:52 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:54:37 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
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

char	*ft_allcheck(char *p)
{
	if (!p)
	{
		return (0);
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		h;
	char	*p;

	i = ft_strlen(s1);
	j = 0;
	h = ft_strlen(s2);
	p = malloc((h + i) * sizeof(char) + 1);
	while (s1[j])
	{
		p[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	ft_allcheck(p);
	return (p);
}
