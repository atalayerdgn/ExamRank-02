#include <unistd.h>
int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return (i);
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int counter = 0;
    if (ac == 3)
    {
        while(av[1][i])
        {
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    counter++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (counter == ft_strlen(av[1]))
        {
            i = 0;
            while(av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}