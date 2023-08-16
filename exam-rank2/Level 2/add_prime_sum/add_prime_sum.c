#include <unistd.h>
int ft_atoi(const char *s)
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
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putnbr(int c)
{
    if (c > 9)
    {
        ft_putnbr(c / 10);
        ft_putnbr(c % 10);
    }
    else
        ft_putchar (c + 48);
}
int isprime(int c)
{
    int i = 2;
    while(i * i <= c)
    {
        if (c % i == 0)
            return (0);
        i++;
    }
    return (1);
}
int main(int ac, char **av)
{
    int i;
    int n = 2;
    int res = 0;
    if (ac == 2)
    {
        i = ft_atoi(av[1]);
        while(n <= i && n > 0)
        {
            if (isprime(n))
                res += n;
            n++;
        }
        ft_putnbr(res);
    }
    else
    {
        write(1, "0\n", 2);
        return (0);
    }
    write(1, "\n", 1);
}