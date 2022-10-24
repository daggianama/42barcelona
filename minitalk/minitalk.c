/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmadrid- <dmadrid-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:22:00 by dmadrid-          #+#    #+#             */
/*   Updated: 2022/10/24 17:42:07 by dmadrid-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				n;
	int				s;
	unsigned char	*pt;

	pt = (unsigned char *)str;
	s = 1;
	n = 0;
	i = 0;
	while (pt[i] == '\f' || pt[i] == '\t' || pt[i] == '\v'
		|| pt[i] == '\r' || pt[i] == ' ' || pt[i] == '\n')
		i++;
	if (pt[i] == '+' || pt[i] == '-')
	{
		if (pt[i] == '-')
			s = s * -1;
		i++;
	}
	while (pt[i] >= '0' && pt[i] <= '9')
	{
		n = (n * 10) + (pt[i] - '0');
		i++;
	}
	return (n * s);
}

char	*ft_tobinary(int i)
{
	int x = 1;
	static char b[7] = "1000000";

	while (!i)
	{
		if (i >= 65  && i <= 122)	
			if (i >= 91 && i <= 96)
				break;
			if ((i - 64) >= 32)
				b[x] = 1;
			x++;
	  			if ((i - 96) >= 16)
					b[x] = 1;
				x++;
					if ((i - 112) >= 8)
						b[x] = 1;
					x++;
						if ((i - 120) >= 4)
							b[x] = 1;
						x++;
							if ((i - 124) >= 2)
								b[x] = 1;
							x++;
								if ((i - 126) >= 1)
									b[x] = 1;
								x++;
	}
	return (b);
}

int	main(void)
{
	const char *s = "hola";
	int	i = ft_atoi(s);
	const char *b = ft_tobinary(i);

/*	while (!b)
	{
		write(1, &b, 1);
		b++;
	}
*/
	write(1, s, 1);
	write(1, b, 1);
	return (0);
}
