#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	*a;
	int	*b;
	int	na;
	int	nb;

	na = 1774;
	nb = 42;
	a = &na;
	b = &nb;
	printf("Valor_anterior_de_a_(numerador): %d\n", *a);
	printf("Valor_anterior_de_b_(denominador): %d\n", *b);
	ft_div_mod(na, nb, a, b);
	printf("Valor_posterior_de_a_(div): %d\n", *a);
	printf("Valor_posterior_de_b_(mod): %d\n", *b);
	return (0);
}
