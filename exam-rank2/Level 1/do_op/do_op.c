#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i,n;
    if (ac == 4)
    {
        if (av[2][1] != '\0')
        {
            printf("\n");
            return (0);
        }
        i = atoi(av[1]);
        n = atoi(av[3]);
        if (av[2][0] == '+')
            printf("%d",i + n);
        if (av[2][0] == '-')
            printf("%d",i - n);
        if (av[2][0] == '%')
            printf("%d",i % n);
        if (av[2][0] == '/')
            printf("%d",i / n);
        if (av[2][0] == '*')
            printf("%d",i * n);        
    }
    printf("\n");
}