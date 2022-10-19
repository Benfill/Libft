/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:13:29 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/19 21:29:00 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		k++;
	}
	set = malloc(k * sizeof(char));
	while (s1[i])
	{
		if ((s1[i] == ' ') || (s1[i] == '\t') || (s1[i] == '\n'))
		{
			*s1++;
		}
		*set++ = *s1++;
		i++;
	}
	return (set);
}

int		main()
{
	char	str[] = "       the saint devl";
	char	*s;
	printf("%s", ft_strtrim(str, s));
}
