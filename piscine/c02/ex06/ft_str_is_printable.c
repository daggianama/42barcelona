/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:53:21 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/13 16:51:06 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str_1 = "HRE!@#$%^&*()";
	char	*str_2 = "bbebgHHHcej\tbveb";
	char	*str_3 = "#####";

	int		res_1;
	int		res_2;
	int		res_3;

	res_1 = ft_str_is_printable(str_1);
	res_2 = ft_str_is_printable(str_2);
	res_3 = ft_str_is_printable(str_3);

	printf("---------------------TEST 1--------------------\n");
	printf("%s \n", str_1);
	if (res_1 == 1)
		printf("Test passed! is_printable = %d \n", res_1);
	else
		printf("Test failed! Expected: 1 | Obtained: %d \n", res_1);
	printf("\n");

	printf("---------------------TEST 2--------------------\n");
	printf("%s \n", str_2);
	if (res_2 == 0)
		printf("Test passed! is_printable = %d \n", res_2);
	else
		printf("Test failed! Expected: 0 | Obtained: %d \n", res_2);
	printf("\n");

	printf("---------------------TEST 3--------------------\n");
	printf("%s \n", str_3);
	if (res_3 == 1)
		printf("Test passed! is_printable = %d \n", res_3);
	else
		printf("Test failed! Expected: 1 | Obtained: %d \n", res_3);
	printf("\n");
	return (0);
}*/
