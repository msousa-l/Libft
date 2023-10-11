/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:01:44 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/11 10:37:41 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"
#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!*s)
		return (0);
	while (*(s + i) != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*int	main(void)
{
	char	*str;
	str = "foda-se";
	ft_putstr_fd(str, 1);
}*/
