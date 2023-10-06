/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:28:05 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 12:51:56 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
     	char	second[24] = "It was all a dream baby!";
	printf("%s\n", ft_strchr(second, 'w'));
	//printf("%s\n", strchr(second, 'w'));
}*/
