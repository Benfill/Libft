/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:13:29 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/08 23:08:14 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	char	*tmp2;
	char	*str;
	int		len;
	int		len2;
	int		i;
	int		j;

	tmp = (char *) s1;
	tmp2 = (char *) set;
	len = ft_strlen(tmp);
	len2 = ft_strlen(tmp2);
	i = 0;
	j = 0;
	str = (char *) malloc (len * sizeof(char));
	if (len2 == 1)
	{
		while (tmp[i])
		{
			str[j] = tmp[i];
			i++;
			j++;
		}
	}
	else
	{
		while (tmp[i])
		{
			str[i] = tmp[i];
			i++;
		}
	i = 0;
		len2--;
		len--;
		while (len)
		{
			if (tmp[i] == tmp2[len2])
			{
				str[i] = '1';
				len2 = j;
				i = len;
			}
			else
			{
				i = len;
				str[i] = '2';
			}
			len--;
			j++;
			if (tmp2[j] == '\0')
				break;
		}
		j = 0;
		i = 0;
		while (tmp[i])
		{
			if (str[i] == '1')
			{
				i++;
			}
			else
			{	str[j] = tmp[i];
				i++;
				j++;
			}
		}
	}
	str[j] = '\0';
	return (str);
}