/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:14:25 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:29:48 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((unsigned char *)p + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Qual sera que vai ser encontrada?";
	int	b = ' ';
	char	*result;

	result = memchr(a, b, strlen(a));
	
	//printf("%s\n", result);
	printf("%s\n", result);
}*/
