#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int cont;
	int s;

	s = 7;
	tab = calloc(s, sizeof(int));
	cont = 0;
	while (cont < s)
	{
		tab[cont] = cont;
		printf("%d", tab[cont]);
		cont++;
	}
	printf("\n");
	ft_rev_int_tab(tab, s);
	cont = 0;
	while (cont < s)
	{
		printf("%d", tab[cont]);
		cont++;
	}
	printf("\n");
	return (0);
}
