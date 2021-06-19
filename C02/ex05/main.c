#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "QEDSP";
	str2 = "qedSP";
	if (ft_str_is_uppercase(str1) == 1)
		printf("%s > contém_só_caract_maiúsculo\n", str1);
	else if (ft_str_is_uppercase(str1) == 0)
		printf("%s > contém_caract_dif_de_maiúsculo\n", str1);
	if (ft_str_is_uppercase(str2) == 1)
		printf("%s > contém_só_caract_maiúsculo\n", str2);
	else if (ft_str_is_uppercase(str2) == 0)
		printf("%s > contém_caract_dif_de_maiúsculo\n", str2);
	return (0);
}
