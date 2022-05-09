#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*read_dict (char *buf2, char **dcc)
{
	int	i;
	int	j;
	int	k;
	int a;
	int b;
//	char	dcc[a][b];
//	int		*carr;

	a = 41;
	b = 51;
	i = 0;
	j = 0;
	k = 0;
	while (buf2[i] != '\0')
	{
		while (buf2[i] != '\n')
		{   
			dcc[j][k] = buf2[i];
		:w
			printf("%c", dcc[j][k]);
			k++;
			i++;
		}
		dcc[j][k] = '\0';
		k = 0;
		j++;
		i++;

//		carr = &j;
	}
	return (*dcc);
}

void count_lines(char *buf2)     //cuenta la cantidad de lineas, contando saltos de linea
{
	int i;
	int lines;

	lines = 0;
	i = 0;
	while(buf2[i] != '\0')
	{	
		if(buf2[i] == '\n')
		{
			lines++;
		}
		i++;
	}
//	printf("el numero de lineas es: %d", lines);
}

void count_len(char *buf2)   
{
	int i;
	int len;
	int j;

	j = 0;
	i = 0;
	len = 0;
	while(buf2[i] != '\0')
	{
		if (buf2[i] == '\n')
		{	
			if (j > len)
			   len	= j;
			j = 0;
		}
		i++;
		j++;
	}
	printf("el numero de caracteres maximo  es:  %d", len);
}

