/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:06:40 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/21 15:20:57 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ptstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = (argc - 1);
	while (argc > 0 && argv[i] != 0 && i > 0)
	{
		ft_ptstr(&argv[i][0]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
