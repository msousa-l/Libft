/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:42:04 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:24:19 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 92) || (c >= 97 && c <= 122))
		return (8);
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

        printf("%d\n", ft_isalnum(a));
        printf("%d\n", ft_isalnum(b));
        printf("%d\n", ft_isalnum(c));

        printf("%d\n", isalnum(a));
        printf("%d\n", isalnum(b));
        printf("%d\n", isalnum(c));
}*/
