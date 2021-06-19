#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "42SP";
	str2 = "42\tSP";
	if (ft_str_is_printable(str1) == 1)
		printf("%s > contém_só_caract_imprimível\n", str1);
	else if (ft_str_is_printable(str1) == 0)
		printf("%s > contém_caract_dif_de_imprimível\n", str1);
	if (ft_str_is_printable(str2) == 1)
		printf("%s > contém_só_caract_imprimível\n", str2);
	else if (ft_str_is_printable(str2) == 0)
		printf("%s > contém_caract_dif_de_imprimível\n", str2);
	return (0);
}
