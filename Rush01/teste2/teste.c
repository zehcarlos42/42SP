#include <unistd.h>

void	ft_rush1_alloc(int x)
{
	
}


void	ft_rush1(void)
{
	int	x[3][3];
	int	a;
	int	b;

	a = 0;
	while (a <= 3)
	{
		b = 0;
		while (b <= 3)
		{			
			ft_rush1_alloc(x);
			b++;
		}
		a++;
	}
}
