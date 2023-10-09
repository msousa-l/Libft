/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:03:22 by msousa-l          #+#    #+#             */
/*   Updated: 2023/10/09 11:24:52 by msousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define "libft.h"
//#include <stdlib.h>
//#include <string.h>

void	*ft_calloc(size_t number, size_t size)
{
	size_t	m;
	void	*p;

	m = number * size;
	p = malloc(m);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, m);
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	int i, n;
	int *a;

	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a = (int*)calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for (i=0 ; i < n ; i++)
       	{
	scanf("%d",&a[i]);
	}

	printf("The numbers entered are: ");
	for (i=0 ; i < n ; i++)
	{
	printf("%d ",a[i]);
	}
	free( a );
	return (0);
}*/
