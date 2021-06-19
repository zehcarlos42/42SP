#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	*dest;
	unsigned int	n;

	n = 2;
	src = calloc(11, sizeof(char));
	src = "42SP é legal :)";
	dest = calloc(11, sizeof(char));
	ft_strncpy(dest, src, n);
	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
	return (0);
}
