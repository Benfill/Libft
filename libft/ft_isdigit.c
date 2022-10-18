/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:37:21 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/06 20:28:46 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isdigit(int arg)
{
	if (!(arg >= '0' && arg <= '9'))
	{
		return (0);
	}
	else
		return (1);
}