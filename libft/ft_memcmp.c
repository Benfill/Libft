/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:13:24 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/15 16:36:10 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int		i;
	int		j;
	char	*s;
	char	*s2;

	i = 0;
	j = 1;
	s = (char *) str1;
	s2 = (char *) str2;
	while (s[i] && s2[i])
	{
		if (n == j)
		{
			if (s[i] == s2[i])
			{
				return (0);
			}
			else
			{
				return (s[i] - s2[i]);
			}
		}
		i++;
		j++;
	}
}
