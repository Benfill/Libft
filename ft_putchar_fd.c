/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenfill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:39:47 by abenfill          #+#    #+#             */
/*   Updated: 2022/10/29 16:54:22 by abenfill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
#include	<stdlib.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	*p;

	p = &c;
	write(fd, p, sizeof(c));
}
