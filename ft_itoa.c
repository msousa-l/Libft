/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:28:05 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/06 13:11:39 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include "libft.h"

static size_t	ft_digits(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
		n /= 10;
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		digits;
	size_t		number;

	number = n;
	digits = ft_digits(n);
	s = (char *)malloc(sizeof(char) * (digits + 1));
	if (s == NULL)
		return (NULL);
	s[digits] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		number *= -1;
	}
	if (n == 0)
		s[0] = '-';
	while (n != 0)
	{
		s[digits - 1] = (number % 10) + 48;
		number = number / 10;
		digits--;
	}
	return (s);
}
