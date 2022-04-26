#include <unistd.h>
#include<stdio.h>
//#include "ft_putchar.c"

void ft_putchar(int c);
void rush00(int numfil, int numcol)
{
         int ver;
         int hor;

                ver = 0;
                while (ver < numcol)
                {
                                hor = 0;
                                while (hor < numfil)
                                {
                                         if ((hor == 0 && ver == 0) || (hor == numfil-1 && ver == numcol-1))
                                        {
                                        ft_putchar('A');
                                        hor++;
                                        }

                                         else if ((hor == 0 && ver == numcol-1) || (hor ==  numfil-1 && ver == 0))
                                        {
                                             ft_putchar('C');
                                     		hor++;													
                                                }

                                        else if (hor < numfil-1 && (ver == 0 || ver == numcol-1)) //comienza a dibujar la horiz  de Bs
                                        {
                                        ft_putchar('B');
                                        hor++;
                                        }


                                 if (ver < numcol-1  && (hor == 0 || hor == numfil-1)) //Comienza el borde de B en vertal
                                {
                                ft_putchar('B');
                                hor++;
                                }

			
											
	
             }
			ft_putchar('\n');
			ver++;
	}
}
