/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:37:04 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 10:36:30 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	chars;

	chars = 0;
	while (*s++)
	{
		chars++;
	}
	return (chars);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "foda-se eu quero que esta frase seja grande para verificar!!!!!";
	printf("%zu\n", ft_strlen(str));
	printf("%zu\n", strlen(str));
}*/
