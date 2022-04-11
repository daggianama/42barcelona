/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:58:48 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/11 12:11:31 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < --size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

/*
int main()
{
	int tab[4] = {2, 3, 4, 5};
	int size;

	size = 4;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
}
*/
