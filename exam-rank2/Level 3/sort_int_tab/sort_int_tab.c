void    sort_int_tab(int *tab, int size)
{
    int i = 0;
    int swap;
    while(i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        else
            i++;
    }
}


int	main()
{
	int tab[6] = {1, 0, 3, 2, 5, 4};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}	
