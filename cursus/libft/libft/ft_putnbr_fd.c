#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
  write(fd, "n", 1);
}
/*Escribe el número ’n’ al file descriptor dado
*/
