/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:19:38 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:55:16 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int		nbr;
	int		len;

	len = 0;
	nbr = n;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa_pos(int n, int len, char *str)
{
	int		i;
	int		nbr;
	int		rem;

	i = 0;
	nbr = n;
	len = ft_nbrlen(n);
	str = (char *) malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		rem = n % 10;
		n = n / 10;
		str[len - (i + 1)] = rem + '0';
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa_nega_min(int n, int len, char *str)
{
	int		i;
	int		k;
	char	*min;

	i = 1;
	k = 0;
	min = "2147483648";
	len = ft_nbrlen(n) + 2;
	n *= -1;
	str = (char *) malloc(len * sizeof(char));
	if (!str)
		return (0);
	while (min[k])
	{
		str[i] = min[k];
		i++;
		k++;
	}
	str[0] = '-';
	str[len - 1] = '\0';
	return (str);
}

char	*ft_itoa_nega(int n, int len, char *str)
{
	int		i;
	int		rem;
	int		nbr;

	i = 1;
	len = ft_nbrlen(n) + 2;
	nbr = n;
	n *= -1;
	str = (char *) malloc(len * sizeof(char));
	if (!str)
		return (0);
	while (i < len)
	{
		rem = n % 10;
		n = n / 10;
		str[len - (i + 1)] = rem + '0';
		i++;
	}
	str[0] = '-';
	str[len - 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		nbr;
	int		len;
	char	*str;

	str = 0;
	nbr = n;
	len = 0;
	if (n < 0)
	{
		if (n > -2147483647)
		{
			str = ft_itoa_nega(n, len, str);
		}
		else
			str = ft_itoa_nega_min(n, len, str);
	}
	else if (n > 0)
		str = ft_itoa_pos(n, len, str);
	else if (n == 0)
	{
		str = (char *) malloc(2);
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}
