#include <stdlib.h>

int ft_abs(int c)
{
    if (c < 0)
        return (-c);
    return (c);
}

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start) + 1;
    int *tab = (int *)malloc(sizeof(int) * len);
    if (!tab)
        return (0);
    if (end > start)
    {
        while(end >= start)
        {
            tab[i] = end;
            end--;
            i++;
        }
    }
    else
    {
        while(end <= start)
        {
            tab[i] = end;
            end++;
            i++;
        }
    }
    return (tab);
}