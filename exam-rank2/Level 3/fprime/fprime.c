#include <stdlib.h>
#include <stdio.h>

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
    int prime = 2;
    if (ac == 2)
    {
        i = atoi(av[1]);
        while(prime <= i)
        {
            if (isprime(prime))
            {
                while(i % prime == 0)
                {
                    printf("%d",prime);
                    if (prime < i)
                        printf("*");
                    i /= prime;
                }
            }
            prime++;
        }
    }
    printf("\n");
}