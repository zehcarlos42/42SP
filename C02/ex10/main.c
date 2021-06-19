#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	n;
	char			*src;
	char			*dest;

	n = 8;
	src = calloc(11, sizeof(char));
	src = "42SP";
	dest = calloc(11, sizeof(char));
	ft_strlcpy(dest, src, n);
	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
	return (0);
}
