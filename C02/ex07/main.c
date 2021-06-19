#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[] = "42sp";
	char	str2[] = "JocaRloS";

	printf("Valor_antes: %s\n", str1);
	printf("Valor_antes: %s\n", str2);
	ft_strupcase(str1);
	ft_strupcase(str2);
	printf("Valor_depois: %s\n", str1);
	printf("Valor_depois: %s\n", str2);

	return (0);
}
