/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:54:17 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/20 20:13:28 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(char *argv)
{	
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_print_program_name (argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
