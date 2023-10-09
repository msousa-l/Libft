/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:33:09 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:15:17 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"
//#include <stdlib.h>
//#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	s = (char *)malloc(sizeof(char) *(1 + (strlen(s1) + (strlen(s2)))));
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "Vamos la ";
	char	s2[] = "juntar isto!";
	
	char	*result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}*/
