#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
  int i;
  
  i = 0;
  while (s[i] != '\0')
  {
    write(fd, &s[i]\n, 1);
    i++;
  }
}
/*Escribe la string ’s’ en el file descriptor
indicado, seguido de un salto de línea*/
