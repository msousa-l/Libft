/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:03:22 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 10:59:54 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"
//#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	first[6] = "abcde";
	char	second[6] = "abcef";
	int	result;

	result = memcmp(first, second, 5);

	printf("%d\n", result);
}*/
