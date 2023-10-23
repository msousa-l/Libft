/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:14:25 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 14:25:44 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[20] = "Just testing!!!";

    size_t len = sizeof(a);
    ft_bzero(a, len);

    printf("string a contents after ft_bzero:\n");
    for (size_t i = 0; i < len; i++)
    {
        printf("%c ",a[i]);
    }
    printf("\n");

    return 0;
}*/
