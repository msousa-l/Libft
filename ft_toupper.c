/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:08:28 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 12:02:44 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;
	c = 'a';
	printf("%c\n", ft_toupper(c));
        printf("%c\n", toupper(c));
}*/
