void	ft_sort_int_tab(int *tab, int size)
{
	int	cont1;
	int	cont2;
	int	temp;

	cont1 = 0;
	while (cont1 < (size - 2))
	{
		cont2 = 0;
		while (cont2 < (size - 1))
		{
			if (tab[cont1] > tab[cont2])
			{
				temp = tab[cont1];
				tab[cont1] = tab[cont2];
				tab[cont2] = temp;
			}
		}
		cont2++;
	}
	cont1++;
}
