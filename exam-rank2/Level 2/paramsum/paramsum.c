#include <unistd.h>


void    ft_print(int c)
{
    if (c > 9)
        ft_print(c / 10);
    write(1, &"0123456789"[c % 10], 1);
}
int main(int ac, char **av)
{
    (void)av;
    int n = ac - 1;
    if(ac > 1)
    {
        ft_print(n);
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}