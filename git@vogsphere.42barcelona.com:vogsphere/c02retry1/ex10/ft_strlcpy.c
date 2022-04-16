/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:17:58 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/04/13 17:01:22 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
	{
		return (len(src));
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len(src));
}
/*
int	main(void)
{
	char	src0_test[] = "Cuidado con el Topo!";
	char	src0[] = "Cuidado con el Topo!";
	char	buf0[24] = "424242424242424242424242";
	char	ref0[24] = "424242424242424242424242";
	unsigned int	len_buf0;
	unsigned int	len_ref0;
	printf("src: %s \n", src0);

	len_buf0 = ft_strlcpy(buf0, src0, 8);
	len_ref0 = strlcpy(ref0, src0_test, 8);
	if (len_buf0 == len_ref0)
	{
		printf("Size passed! \n");
		printf("Expected length: %d \n", len_ref0);
	  	printf("Obtained length: %d \n", len_buf0);

	}
	else
	{
		printf("Size failed :( \n");
		printf("Expected: %d \n", len_ref0);
		printf("Obtained: %d \n", len_buf0);
	}
	printf("Expected copied string: %s \n", ref0);
	printf("Obtained copied string: %s \n", buf0);

	printf("src: %s \n", src0);


	len_buf0 = ft_strlcpy(buf0, src0, 12);
	len_ref0 = strlcpy(ref0, src0_test, 12);
	if (len_buf0 == len_ref0)
	{
		printf("Size passed! \n");
		printf("Expected length: %d \n", len_ref0);
		printf("Obtained length: %d \n", len_buf0);
	}
	else
	{
		printf("Size failed :( \n");
		printf("Expected: %d \n", len_ref0);
	  	printf("Obtained: %d \n", len_buf0);
	}
    printf("Expected copied string: %s \n", ref0);
    printf("Obtained copied string: %s \n", buf0);


     printf("src: %s \n", src0);
	len_buf0 = ft_strlcpy(buf0, src0, sizeof(buf0));
	len_ref0 = strlcpy(ref0, src0_test, sizeof(ref0));
     if (len_buf0 == len_ref0)
     {
         printf("Size passed! \n");
         printf("Expected length: %d \n", len_ref0);
         printf("Obtained length: %d \n", len_buf0);
     }
     else
     {
         printf("Size failed :( \n");
         printf("Expected: %d \n", len_ref0);
         printf("Obtained: %d \n", len_buf0);
     }
     printf("Expected copied string: %s \n", ref0);
     printf("Obtained copied string: %s \n", buf0);




	return (0);
}*/
