/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:07:05 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/11 17:07:04 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int ord;
	i = 0;
	
	while (i < --size)
	{
		if(tab[i] > tab[size - 1 - i])		
		{
			ord = tab[i];
			tab[i] = tab[size - 1 - i];
	   		tab[size - 1 - i] = ord;
		}		
		i++;
	}
	while (i == --size)	
	{
		if (tab[i] < tab[size - ++i])
			i++;
		else	
		ft_sort_int_tab(tab, size);	
	}
}

int main()
{
    int tab[4] = {9, 3, 8, 5};
    int size;

    size = 4;
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
}
