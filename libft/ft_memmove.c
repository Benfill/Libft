/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:31:36 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/18 15:13:28 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

void	*ft_memmove(void *to, const void *from, size_t n)
{
	char	*src;
	char	*dst;
	int		i;
	int		j;

	i = ft_strlen(from);
	j = ft_strlen(to);
	src = (char *) from;
	dst = (char *) to;
	while (n > j)
	{
		dst[j] = src[i];
		i--;
		j--;
	}
	return (dst);
}

int main()
{
		char dst[100] = "123456789";
		    char src[100] = "ABCDeeee";

			    char *n = ft_memmove(dst + 3, src, 7);
					/* Copies contents of str2 to sr1 */
					printf("%s", dst);

						return 0;
}
