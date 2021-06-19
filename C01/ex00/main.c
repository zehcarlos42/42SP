#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	n;
	int	*nbr;

	nbr = &n;
	ft_ft(nbr);
	printf("Conteúdo_de_n: %d\n", n);
	printf("Ponteiro_de_n: %p\n", &nbr);
	printf("Conteúdo_de_nbr: %d\n", *nbr);
	printf("Endereco_de_nbr: %p\n", &nbr);
	return (0);
}
