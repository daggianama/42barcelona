/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:58:48 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/13 22:09:06 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int tab_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	tab_2[1] = {-1};
	printf("-------------------------TEST 1---------------------------\n");
	int size = 5;
	int	i = 0;
		
	printf("Input:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab[i]);
		else
			printf("%d", tab[i]);
		i++;
	}
	printf("]");
	printf("\n");

	ft_rev_int_tab(tab, size);
	
	i = 0;
	printf("Output:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab[i]);
		else
			printf("%d", tab[i]);
		i++;
	}
	printf("]");
	printf("\n");

	printf("-------------------------TEST 2---------------------------\n");
	size = 10;
	i = 0;
	
	printf("Input:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_1[i]);
		else
			printf("%d", tab_1[i]);
		i++;
	}
	printf("]");
	printf("\n");

	ft_rev_int_tab(tab_1, size);
	
	i = 0;
	printf("Output:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_1[i]);
		else
			printf("%d", tab_1[i]);
		i++;
	}
	printf("]");
	printf("\n");
	
	printf("-------------------------TEST 3---------------------------\n");
	size = 1;
    i = 0;
		
	printf("Input:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_2[i]);
		else
			printf("%d", tab_2[i]);
		i++;
	}
	printf("]");
	printf("\n");

	ft_rev_int_tab(tab_2, size);
	
	i = 0;
	printf("Output:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_2[i]);
		else
			printf("%d", tab_2[i]);
		i++;
	}
	printf("]");
	printf("\n");
	return (0);
}*/
