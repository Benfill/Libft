/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:01:22 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/15 14:55:08 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int			i;
	char		a;
	const char	*ptr;

	ptr = NULL;
	i = 0;
	a = c;
	while (str[i])
	{
		if (str[i] == a)
		{
			ptr = &str[i];
			return (ptr);
		}
		i++;
	}
	if (ptr == NULL)
	{
		return (ptr);
	}
}
