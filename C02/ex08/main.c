#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str1[] = "OH MY GOD";
	char	str2[] = "JocARloS";

	printf("Valor_antes: %s\n", str1);
	printf("Valor_antes: %s\n", str2);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	printf("Valor_depois: %s\n", str1);
	printf("Valor_depois: %s\n", str2);

	return (0);
}
