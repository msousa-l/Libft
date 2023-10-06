/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:42:04 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 10:08:30 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
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
        int     c = '?';

        printf("%d\n", ft_isascii(a));
        printf("%d\n", ft_isascii(b));
        printf("%d\n", ft_isascii(c));

        printf("%d\n", isascii(a));
        printf("%d\n", isascii(b));
        printf("%d\n", isascii(c));
}*/
