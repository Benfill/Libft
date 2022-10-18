/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:39:55 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/15 16:07:30 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	int		i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (char *) str;
	ptr2 = NULL;
	while (n > i)
	{
		if (ptr[i] == c)
		{
			ptr2 = &ptr[i];
			return (ptr2);
		}
		i++;
	}
	if (ptr2 == NULL)
	{
		return (ptr2);
	}
}
