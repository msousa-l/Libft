/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:01:14 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 11:32:11 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"
//#include <stdlib.h>
//#include <string.h>

char	*ft_strdup(const char *src)
{
	int	i;
	int	size;
	char	*dest;
	
	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello beautiful";
	char	*target = ft_strdup(str);
	printf("%s\n",target);
	free(target);
}*/
