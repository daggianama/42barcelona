#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *read_dict (char *buf2, char **dcc);
int	 check_string(char *argv);


int main(int  argc, char **argv)  
{	
	int fd;
	char buf[1];
	char *buf2;
	ssize_t nr_bytes;
	int i;
	char  numero;
	int int_numero;
	char **dcc;

	dcc = 0;

//	dcc[0][0] = [41][51];
		//	char  diccionario;

	i = 0;
	nr_bytes = 1;

	fd = open ("/Users/dmadrid-/Desktop/Rush02/rush/ex00/numbers_dictionary.txt", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error openning \n", 16);
	}
	else
	{	i = 0;
		while (nr_bytes !=  0)
		{
			nr_bytes = read (fd, buf, 1);
			i++;
		}
		close(fd);
		fd = open ("/Users/dmadrid-/Desktop/Rush02/rush/ex00/numbers_dictionary.txt", O_RDONLY);
		buf2 = (char *)malloc(i* sizeof (char));
		nr_bytes = read (fd, buf2, i);
	//	printf("numero de caracteres es %d , el contenido es:\n %s", i,  buf2);
	}
	close (fd);
	
	if (argc == 2)
	{
		if (check_string(argv[1]) == 0)
			return (0);
		else
		read_dict(buf2, dcc);
	//	printf("%s", *dcc);
		write(1, "%c", dcc[1][5]);

	}

			numero = argv[1][0];
			int_numero = numero - '0';
//		i = 0;
//		while (dcc[int_numero][i] != '\0')
//		{

//			i++;
//		}
			
		//	printf("%c", read_dict (dcc[1][0]));

	if (argc == 3)
	{
		write(1, "Dict Error\n", 10);
	}
	if (argc > 3)
	{
		write(1, "Wrong argument\n", 15);
	}

	free(buf2);

	return(0);
}
