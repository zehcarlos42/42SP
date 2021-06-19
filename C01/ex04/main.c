#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*ptr_na;
	int	*ptr_nb;
	int	na;
	int	nb;

	na = 1768;
	nb = 42;
	ptr_na = &na;
	ptr_nb = &nb;
	printf("Valor_anterior_de_a_(numerador): %d\n", *ptr_na);
	printf("Valor_anterior_de_b_(denominador): %d\n", *ptr_nb);
	ft_ultimate_div_mod(ptr_na, ptr_nb);
	printf("Valor_posterior_de_a_(div): %d\n", *ptr_na);
	printf("Valor_posterior_de_b_(mod): %d\n", *ptr_nb);
	return (0);
}
