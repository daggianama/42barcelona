/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:01:13 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/14 11:18:22 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str_1[] = "salUt, CoMMent _tu vas ? 42Mots quarante-deuX; cinquante+et+un";

	char	str_2[] = "&&yes 5325no  7583no407no+yes-yes ,yes";
	char	str_3[] = "";
	char	*res_1;
	char	*res_2;
	char	*res_3;

	printf("Input strings: \n");
	printf("TEST 1: %s \n", str_1);
	printf("TEST 2: %s \n", str_2);
	printf("TEST 3: %s \n", str_3);
	printf("\n");
	res_1 = str_1;
	res_2 = str_2;
	res_3 = str_3;
	res_1 = ft_strcapitalize(res_1);
	res_2 = ft_strcapitalize(res_2);
	res_3 = ft_strcapitalize(res_3);
	printf("Output strings: \n");
	printf("TEST 1: %s \n", res_1);
	printf("TEST 2: %s \n", res_2);
	printf("TEST 3: %s \n", res_3);
	return (0);
}*/
