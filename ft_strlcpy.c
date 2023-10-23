/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:27:23 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 11:37:40 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[30] = "";
	char	src[25] = "See you later alligator!";
	size_t	result;

	result = ft_strlcpy(dest, src, 0);
	printf("length of src is %zu.", result);
	printf("String dest now is : %s", dest);

	//result = strlcpy(dest, src, 0);
        //printf("length of src is %zu.", result);
        //printf("String dest now is : %s", dest);

}*/		
