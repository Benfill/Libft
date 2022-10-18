/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:02:13 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/18 14:48:06 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	*ft_memcpy(const void *dest, const void *src)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

char	*ft_strdup(const char *s)
{
	int		i;
	void	*ptr;

	i = ft_strlen(s);
	ptr = (char *) s;
	s = malloc(i * sizeof(char));
	ft_memcpy(s, ptr);
	return (s);
}
