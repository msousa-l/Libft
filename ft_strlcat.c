/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:13:54 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:20:00 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	z;
	size_t	result;

	i = 0;
	z = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	while (dst[i] != '\0')
		i++;
	if (size <= i)
		result += size;
	else
		result += i;
	while (src[z] != '\0' && (i + 1) < size)
	{
		dst[i] = src[z];
		z++;
		i++;
	}
	dst[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[20] = "Muito ";
	char	src[8] = "bom dia";

        printf("%zu\n",ft_strlcat(dst, src, 10));
	printf("%zu\n", strlcat(dst, src, 10));
	printf("%s\n", dst);
}*/
