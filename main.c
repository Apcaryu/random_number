#include "main.h"

int	*init_tab(char *n_gen)
{
	int	*tab;
	int	int_n_gen;

	int_n_gen = atoi(n_gen);
	tab = malloc(sizeof(int) * int_n_gen);
	return (tab);
}

int	main(int argc, char *argv[])
{
	int	*tab_numbers;
	if (argc == 2)
		tab_numbers = init_tab(argv[1]);
	(void)tab_numbers;
	return (0);
}