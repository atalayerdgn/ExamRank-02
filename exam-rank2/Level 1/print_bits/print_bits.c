#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int bit = 8;
    unsigned char a;
    while (bit--)
    {
        a = (octet >> bit & 1) + '0';
        write(1, &a, 1);
    }
}