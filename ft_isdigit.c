/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:42:04 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:22:17 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int     a = 'a';
        int     b = '3';
        int     c = '5';
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(a));
        printf("%d\n", isdigit(b));
        printf("%d\n", isdigit(c));
}*/
