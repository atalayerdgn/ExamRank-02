#include <unistd.h>

void    ft_print(int c)
{
    if (c > 15)
        ft_print(c / 16);
    write(1, &"0123456789abcdef"[c % 16], 1);
}
int ft_atoi(char *s)
{
    int res = 0;
    while(*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    while(*s >= '0' && *s <= '9')
    {
        res = res * 10 + *s - 48;
        s++;
    }
    return (res);
}
int main(int ac, char **av)
{
    int n;
    if (ac == 2)
    {
        n = ft_atoi(av[1]);
        ft_print(n);
    }
    write(1, "\n", 1);
}