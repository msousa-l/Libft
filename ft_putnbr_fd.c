/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:19:32 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/11 10:50:55 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return (0);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd(nb % 10 + '0', fd);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = -2147483648;
	int	b = 6;
	int	c = 2147483647;
	ft_putnbr(a);
	ft_putchar(10);
	ft_putnbr(b);
	ft_putchar(10);
	ft_putnbr(c);
}*/
