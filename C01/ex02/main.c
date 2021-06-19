#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	na;
	int	nb;
	int	*a;
	int	*b;

	na = 4;
	nb = 2;
	a = &na;
	b = &nb;
	printf("Valor_anterior_de_a: %d\n", *a);
	printf("Valor_anterior_de_b: %d\n", *b);
	ft_swap(a, b);
	printf("Valor_posterior_de_a: %d\n", *a);
	printf("Valor_posterior_de_b: %d\n", *b);
	return (0);
}
