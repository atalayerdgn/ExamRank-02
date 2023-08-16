#include <unistd.h>

int check(char *s, char c,int i)
{
    int m = 0;
    while(m < i)
    {
        if (s[m] == c)
            return (0);
        m++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j;
    if (ac == 3)
    {
        while(av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    if (check(av[1],av[1][i],i))
                    {
                        write(1, &av[1][i], 1);
                        break;
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}