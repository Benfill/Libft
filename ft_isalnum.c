/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:00:45 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:59:23 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int argument)
{
	if (argument >= '0' && argument <= '9')
		return (1);
	else if (argument >= 'a' && argument <= 'z')
		return (1);
	else if (argument >= 'A' && argument <= 'Z')
		return (1);
	else
		return (0);
}
