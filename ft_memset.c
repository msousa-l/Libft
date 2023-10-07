/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:14:25 by msousa-l          #+#    #+#             */
/*   Updated: 2023/07/31 11:21:05 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <string.h>
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	p = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		 i++;
	 }
	 return (str);
}

#include <stdio.h>
#include <string.h>
/*int	main(void)
{
	char	a[50] = "Eu sei que isto vai ser substituido!";
	int	b = '.';
	int	c = 10;

	printf("%p\n", ft_memset(a, b , c));
	//printf("%s\n", memset(a, b, c));
}
int main(void)
{
    char a[20];

    size_t len = sizeof(a);
    ft_memset(a, 'A', 5);

    printf("string a contents after ft_memset:\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c ",a[i]);
    }
    printf("\n");

    return 0;
}*/
