/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:37:50 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/08 23:08:08 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdlib.h>
#include    <stdio.h>
#include    "libft.h"

char    *ft_allcheck(char *p)
{
    if (!p)
    {
        return (0);
    }
    return (0);
}

char    **ft_split(char const *s, char c)
{
    char    *str;
    char    *str2;
	char	**p;
    int		i;
    int		j;

    i = 0;
    while (s[i] != c)
    {
        i++;
    }
    i += 1;
    str = (char *)malloc(i * sizeof(char));
    str2 = malloc(i * sizeof(char));
	p = (char **) malloc(i * sizeof (char));
    i = 0;
    while ((s[i] != c) || (s[i]))
    {
        if ((s[i] == c) || (s[i] == ',') || (s[i] == '.') || (s[i] == ';'))
        {
            break ;
        }
        *p[i] = s[i];
        i++;
    }
    *p[i] = '\0';
	return (p);
	free(p);
    j = 0;
    i++;
    while (s[i])
    {
        *p[j] = s[i];
        i++;
        j++;
    }
    *p[j] = '\0';
	return (p);
    ft_allcheck(str);
	
}
