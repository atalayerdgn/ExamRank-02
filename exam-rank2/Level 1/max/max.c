int max(int *tab, unsigned int len)
{
    int i = 0;
    int swap;
    while(i < len)
    {
        if(tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
        }
        i++;
    }
    return (tab[i]);
}