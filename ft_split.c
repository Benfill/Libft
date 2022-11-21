/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spliiii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:14:03 by abenfill          #+#    #+#             */
/*   Updated: 2022/11/20 14:26:00 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "libft.h"

int	ft_split_counter(char const *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count + 1);
}

static void	*ft_free_split(char **split, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**split_full_str(const char *s, char c, char **str, size_t i)
{
	size_t		j;
	size_t		len;

	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i] && s[i] != c)
			{
				i++;
				len++;
			}
			str[j] = ft_substr((char *)(s +(i - len)), 0, len);
			if (!str[j])
				return (ft_free_split(str, j));
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char *) * (ft_split_counter(s, c) + 1));
	if (!str)
		return (0);
	return (split_full_str(s, c, str, i));
}
