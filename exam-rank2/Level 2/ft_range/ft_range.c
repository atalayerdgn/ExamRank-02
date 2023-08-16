#include <stdlib.h>
int ft_abs(int c)
{
    if (c < 0)
        return (-c);
    return(c);
}
int *ft_range(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start) + 1;
    int *tab;
    tab = (int *)malloc(sizeof(int) * len);
    if (!tab)
        return(0);
    if (start > end)
    {
        while(start >= end)
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    else
    {
        while(start <= end)
        {
            tab[i] = start;
            start++;
            i++;
        }
    }
    return (tab);
}