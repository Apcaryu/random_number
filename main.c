#include "main.h"

int	*init_tab(int n_gen)
{
	int	*tab;

	tab = malloc(sizeof(int) * n_gen);
	return (tab);
}

int	main(int argc, char *argv[])
{
	int	*tab_numbers;
	int n_gen;

	if (argc == 2)
	{
		n_gen = atoi(argv[1]);
		tab_numbers = init_tab(n_gen);
	}
	(void)tab_numbers;
	return (0);
}