/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:19:38 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/23 14:19:55 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

int	ft_strlen(int *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		*tmp;

	tmp = &n;
	i = ft_strlen(tmp);
	str = malloc(i * sizeof(char));
	i = 0;
	while (tmp[i])
	{
		str[i] = tmp[i];
		i++;
	}
	if (!str)
	{
		return (0);
	}
	return (str);
}
