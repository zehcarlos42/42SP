#include <stdio.h>

char	*ft_capitalize(char *str);

int	main(void)
{
	char	str1[] = "B0L50N4R0 G3N0C1D4";
	char	str2[] = "eu QUero viRar cadeTe Da eScoLa 42sP";

	printf("Valor_antes: %s\n", str1);
	printf("Valor_antes: %s\n", str2);
	ft_capitalize(str1);
	ft_capitalize(str2);
	printf("Valor_depois: %s\n", str1);
	printf("Valor_depois: %s\n", str2);

	return (0);
}
