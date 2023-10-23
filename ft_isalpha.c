/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:14:25 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 10:03:09 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int	a = 'a';
	int	b = '3';
	int	c = '?';

	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));

	printf("%d\n", isalpha(a));
	printf("%d\n", isalpha(b));
	printf("%d\n", isalpha(c));
}*/
