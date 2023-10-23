/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:08:28 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 12:27:12 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;
	c = 'A';
	printf("%c\n", ft_tolower(c));
        printf("%c\n", tolower(c));
}*/
