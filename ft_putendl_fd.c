/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:01:44 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/11 10:43:23 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!*s || fd < 0)
		return (0);
	else
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int	main(void)
{
	char	*str;
	str = "foda-se";
	ft_putstr_fd(str, 1);
}*/
