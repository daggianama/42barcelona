/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:31:08 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/08 14:02:24 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int s;

	s = *b;
    *b = *a;
	*a = s;	
}

int main()
{
	int a;
   	int b;
	a	= 2;
	 b = 4;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b =  %d\n", b);
}

