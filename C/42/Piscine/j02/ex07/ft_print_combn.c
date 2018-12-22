void	ft_putchar(char c);

int		*ft_set_tab(int	*tab, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
}

void	ft_set_rise(int *tab, n)
{
	gf
}

void	ft_print_tab(int tab, int n)
{
	int		i;

	i = 0;
	while (i <= n)
		ft_putchar(tab[i++] + '0');
}

void	ft_print_combn(int n)
{
	int		tab[9];

	ft_set_tab(tab, n--);
	while (tab[n] < 9 - n)
	{
		while (tab[n] <= 9)
		{
			ft_print_tab(tab, n);
			ft_putchar(',');
			ft_putchar(' ');
			tab[n] += 1;
		}
		ft_set_rise(tab, n);
	}
	ft_print_tab(tab, n);
}