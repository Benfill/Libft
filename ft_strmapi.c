/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:46:25 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/31 12:51:39 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>
#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*tmp;
	int		i;

	i = ft_strlen(s);
	str = (char *) malloc(i * sizeof(char) + 1);
	tmp = (char *) s;
	if (!str || !f)
		return (0);
	i = 0;
	while (tmp[i])
	{
		str[i] = f(i, tmp[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
