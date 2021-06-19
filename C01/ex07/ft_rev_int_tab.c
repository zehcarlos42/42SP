void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	temp;

	cont = 0;
	while (cont < (size / 2))
	{
		temp = tab[cont];
		tab[cont] = tab[size - cont - 1];
		tab[size - cont - 1] = temp;
		cont++;
	}
}
