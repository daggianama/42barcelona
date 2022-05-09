#include <unistd.h>

int	 check_string(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if(!(argv[i] >= '0' && argv[i] <= '9'))
		{			write(1, "Error\n", 5);
			return(0);
		}
		else
			i++;
	}
	if (i > 32)
		return (0);
	else
		return (1);
}
