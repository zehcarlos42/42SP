#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	nmr;

	nmr = '0';
	while (nmr <= '9')
	{
		ft_putchar(nmr);
		nmr++;
	}
}
