/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:47:19 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/20 12:52:43 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char i)
{
	write(1, &i, 1);
}
/*
void	ft_cases(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2147483648", 10);
	}
}*/

void	ft_putnbr_base(int nbr, char *base)
{	
	int	i;

	i = 0;
	ft_cases(nb);
	if (base == '\0')
		return (1);
	while (nbr < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nbr = -1 * nbr;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb > 0)
	{
		ft_putchar(i);
	}
	if (base[i] != '\0')
	{
		nbr = i;
		nbr = base[i];
	}
}
/*
int	main(void)
{
	int		nbr_pos;
	int		nbr_neg;
	char	*decimal_base = "0123456789";
	char	*binary_base = "01";
	char	*hexa_base = "0123456789ABCDEF";
	char	*octal_base = "poneyvif";
   	char	*quarternary_base = "top@";
	char	*invalid_base1 = "";
	char	*invalid_base2 = "0";
	char	*invalid_base3 = "+25";
	char	*invalid_base4 = "topo";

	nbr_pos = 0;
	nbr_neg = -2147483648;

	printf("Tests with nbr = %d and nbr = %d\n", nbr_pos, nbr_neg);
	printf("----------------------------------------------------------------\n");
	printf("Decimal base: %s\n", decimal_base);
	printf("Expected:\n0\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, decimal_base);
	printf("\n");

	printf("Expected:\n-2147483648\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, decimal_base);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Binary base: %s\n", binary_base);
	printf("Expected:\n0\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, binary_base);
	printf("\n");

	printf("Expected:\n-10000000000000000000000000000000\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, binary_base);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Hexadecimal base: %s\n", hexa_base);
	printf("Expected:\n0\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, hexa_base);
	printf("\n");

	printf("Expected:\n-80000000\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, hexa_base);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Octal base: %s\n", octal_base);
	printf("Expected:\np\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, octal_base);
	printf("\n");

	printf("Expected:\n-npppppppppp\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, octal_base);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Quarternary base: %s\n", quarternary_base);
	printf("Expected:\nt\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, quarternary_base);
	printf("\n");

	printf("Expected:\n-pttttttttttttttt\n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, quarternary_base);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Invalid base: %s\n", invalid_base1);
	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, invalid_base1);
	printf("\n");

	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, invalid_base1);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Invalid base: %s\n", invalid_base2);
	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, invalid_base2);
	printf("\n");

	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, invalid_base2);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Invalid base: %s\n", invalid_base3);
	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, invalid_base3);
	printf("\n");

	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, invalid_base3);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	printf("Invalid base: %s\n", invalid_base4);
	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_pos, invalid_base4);
	printf("\n");

	printf("Expected: \n");
   	printf("Obtained: \n");
	ft_putnbr_base(nbr_neg, invalid_base4);
	printf("\n");
	printf("----------------------------------------------------------------\n");

	return (0);
}*/
