/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:28:43 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/17 12:26:18 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	while (big[i])
	{
		if (little[j] == big[i])
		{
			ptr = &big[i];
			while (little[j] == big[i] && n > j)
			{
				i++;
				j++;
			}
		}
		if (little[j] != '\0' && n > j)
		{
			j = 0;
			ptr = NULL;
		}
		i++;
	}
	return (ptr);
}
