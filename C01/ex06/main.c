#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int		quant;
	char	*string = "aqui tem 22 caracteres";

	printf("Valor_anterior_(string): %s\n", string);
	quant = ft_strlen(string);
	printf("Valor_posterior_(tamanho_da_string): %d\n", quant);
	return (0);
}
