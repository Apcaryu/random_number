#include "main.h"

int	*init_tab(int n_gen)
{
	int	*tab;

	tab = malloc(sizeof(int) * n_gen);
	return (tab);
}

void	gen_numbers(int *tab, int n_gen)
{
	int	tmp;
	int idx;

	idx = 0;
	while (idx < n_gen)
	{
		tmp = (rand() % INT_MAX - 1) / 1000;
		tab[idx] = tmp;
		idx++;
	}
}

int	main(int argc, char *argv[])
{
	int	*tab_numbers;
	int n_gen;
	int idx;

	if (argc == 2)
	{
		n_gen = atoi(argv[1]);
		tab_numbers = init_tab(n_gen);
		gen_numbers(tab_numbers, n_gen);
	}
	idx = 0;
	while (idx < n_gen)
	{
		printf("%d ", tab_numbers[idx]);
		idx++;
	}
	return (0);
}