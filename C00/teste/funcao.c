#include <unistd.h>

int main()
{
	int c;
	c="5\n";
	write(1, &c, 1);
}