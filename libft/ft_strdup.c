/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:02:13 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:01:17 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *) malloc(i * sizeof(char));
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	if (!s)
	{
		return (0);
	}
	return (ptr);
}
