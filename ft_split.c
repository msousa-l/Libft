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

#include "libft.h"

static size_t	ft_size(char const *s, char c)
{
	size_t	size;

	if (!*s)
		return (0);
	size = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			size++;
		while (*s != c && *s)
			s++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	s_len;
	int		i;

	list = (char **)malloc((ft_size(s, c) + 1) * sizeof(char *));
	if (!s || !list)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				s_len = ft_strlen(s);
			else
				s_len = ft_strchr(s, c) - s;
			list[i++] = ft_substr(s, 0, s_len);
			s += s_len;
		}
	}
	lst[i] = '\0';
	return (lst);
}
