#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
        int i;
        int j;
        int tmp;

        i = 0;
        j = 0;
        while (i < size)
        {
                while (j < size)
                {
                        if(tab[i] > tab[j])
                        {
                                tmp = tab[i];
                                tab[i] = tab[j];
                                tab[j] = tmp;
                        }
                        j++;
                }
                i++;
                j = i + 1;
        }
}

int main()
{
    int tab[6] = {9, 3, 8, 4, 7, 5};
    int size;

    size = 6;
    ft_sort_int_tab(tab, size);
    printf("%d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}
