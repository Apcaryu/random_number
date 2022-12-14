#include "main.h"

static long get_nanos(void) {
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    return (long)ts.tv_sec * 1000000000L + ts.tv_nsec;
}

int	*init_tab(int n_gen)
{
	int	*tab;

	tab = malloc(sizeof(int) * n_gen);
	return (tab);
}

char check_presence(int *tab, int gen_done, int num)
{
	int idx;

	idx = 0;
	while (idx < gen_done)
	{
		if (tab[idx] == num)
			return (1);
		idx++;
	}
	return (0);
}

void	gen_numbers(int *tab, int n_gen)
{
	int	tmp;
	int idx;

	idx = 0;
	srand(get_nanos());
	while (idx < n_gen)
	{
		tmp = (rand() % INT_MAX - 1) / 1000;
		if (!check_presence(tab, idx, tmp))
		{
			tab[idx] = tmp;
			idx++;
		}
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