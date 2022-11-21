/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:28:43 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 17:02:56 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (big == 0 && n == 0)
		return (0);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (little[i] == 0)
		return ((char *)big + ft_strlen(big));
	while (i < n && big[i + j] != '\0')
	{
		while (big[i + j] == little[j] && little[j])
			j++;
		if (little[j] == '\0' && i + j <= n)
			return ((char *) big + i);
		j = 0;
		i++;
	}
	return (NULL);
}
