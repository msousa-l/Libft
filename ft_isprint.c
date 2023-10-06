/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:57:34 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 10:04:34 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int     main(void)
{
	int     a = 'a';
        int     b = '\n';
        int     c = '?';

        printf("%d\n", ft_isprint(a));
        printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));

	printf("%d\n", isprint(a));
	printf("%d\n", isprint(b));
        printf("%d\n", isprint(c));
}*/
