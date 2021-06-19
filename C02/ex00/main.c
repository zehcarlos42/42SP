#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*dest;

	src = calloc(11, sizeof(char));
	src = "42SP =)";
	printf("source: %s\n", src);
	dest = calloc(11, sizeof(char));
	ft_strcpy(dest, src);
	printf("destination: %s\n", dest);
	return (0);
}
