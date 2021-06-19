#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "42";
	str2 = "42SP";
	if (ft_str_is_numeric(str1) == 1)
		printf("%s > contém_só_números\n", str1);
	else if (ft_str_is_numeric(str1) == 0)
		printf("%s > contém_não_números\n", str1);
	if (ft_str_is_numeric(str2) == 1)
		printf("%s > contém_só_números\n", str2);
	else if (ft_str_is_numeric(str2) == 0)
		printf("%s > contém_não_números\n", str2);
	return (0);
}
