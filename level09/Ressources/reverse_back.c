#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	if (ac != 2)
	return (0);
	while (av[1][i])
	{
		av[1][i] -= i;
		i++;
	}
	printf("%s\n", av[1]);
	return (0);
}
