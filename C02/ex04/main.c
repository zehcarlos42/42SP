#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "quarentaedois";
	str2 = "quarentaedoisSP";
	if (ft_str_is_lowercase(str1) == 1)
		printf("%s > contém_só_caract_minúsculo\n", str1);
	else if (ft_str_is_lowercase(str1) == 0)
		printf("%s > contém_caract_dif_de_minúsculo\n", str1);
	if (ft_str_is_lowercase(str2) == 1)
		printf("%s > contém_só_caract_minúsculo\n", str2);
	else if (ft_str_is_lowercase(str2) == 0)
		printf("%s > contém_caract_dif_de_minúsculo\n", str2);
	return (0);
}
