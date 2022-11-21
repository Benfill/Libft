/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:42:14 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/19 13:58:53 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			lenstr;

	i = 0;
	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	if (lenstr - start < len)
		len = lenstr - start;
	if (start > lenstr)
		return (ft_strdup(""));
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
