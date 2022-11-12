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
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *) malloc(i * sizeof(char) + 1);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	if (!s)
	{
		return (0);
	}
	return (ptr);
}
