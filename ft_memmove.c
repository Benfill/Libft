/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:31:36 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/19 13:49:15 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	char	*src;
	char	*dst;

	src = (char *) from;
	dst = (char *) to;
	if (dst == 0 && src == 0)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src && src + n > dst)
	{
		src = src + n - 1;
		dst = dst + n - 1;
		while (n--)
		{
			*dst-- = *src--;
		}
	}
	else
		while (n--)
			*dst++ = *src++;
	return (to);
}

int		main()
{
	int	tab[10] = {20, 50, 60, 40}, tab2[10] = {50, 10, 44, 30};
	printf("%d", *(int *)ft_memmove(tab, tab2, 3));
}