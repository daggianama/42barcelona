/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:18:36 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/14 16:52:34 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str_1[] = "HdfjnRgrmgmElmgr!@#$grlmgr%^&*()";
	char	str_2[] = "bbebgHHHcejibveb";
	char	str_3[] = "";
	char	*str;
	char	*res_2;
	char	*res_3;

	printf("Input strings: \n");
	printf("TEST 1: %s \n", str_1);
	printf("TEST 2: %s \n", str_2);
	printf("TEST 3: %s \n", str_3);
	printf("\n");
	str = str_1;
	res_2 = str_2;
	res_3 = str_3;
	str = ft_strupcase(str);
	res_2 = ft_strupcase(res_2);
	res_3 = ft_strupcase(res_3);
	printf("Output strings: \n");
	printf("TEST 1: %s \n", str);
	printf("TEST 2: %s \n", res_2);
	printf("TEST 3: %s \n", res_3);
	return (0);
} */
