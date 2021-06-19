#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "42SP";
	str2 = "Marvin";
	str3 = "Marvin SP";
	if (ft_str_is_alpha(str1) == 1)
		printf("%s > contém_só_alfa\n", str1);
	else if (ft_str_is_alpha(str1) == 0)
		printf("%s > contém_não_alfa\n", str1);
	if (ft_str_is_alpha(str2) == 1)
		printf("%s > contém_só_alfa\n", str2);
	else if (ft_str_is_alpha(str2) == 0)
		printf("%s > contém_não_alfa\n", str2);
	if (ft_str_is_alpha(str3) == 1)
		printf("%s > contém_só_alfa\n", str3);
	else if (ft_str_is_alpha(str3) == 0)
		printf("%s > contém_não_alfa\n", str3);
	return (0);
}
