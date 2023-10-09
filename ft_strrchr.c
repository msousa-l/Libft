/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:28:05 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:32:07 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
     	char	second[25] = "It was all a dream bwaby!";
	//printf("%s\n", ft_strrchr(second, 'w'));
	printf("%s\n", strrchr(second, 'w'));
}*/
