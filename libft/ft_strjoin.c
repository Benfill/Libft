/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:15:52 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/19 20:23:49 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		h;
	char	*p;

	i = ft_strlen(s1);
	j = 0;
	h = ft_strlen(s2);
	p = malloc((h + i) * sizeof(char));
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
	return (p);
}
