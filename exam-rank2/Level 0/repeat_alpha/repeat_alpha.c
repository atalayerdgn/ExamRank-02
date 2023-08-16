#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int counter;
    if (ac == 2)
    {
        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                counter = av[1][i] - 96;
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                counter = av[1][i] - 64;
            else
                write(1, &av[1][i], 1);
            while (counter)
            {
                write(1, &av[1][i], 1);
                counter--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}