void	ft_putchar(char c);

void	ft_put_2d_nbr(int nbr)
{
	ft_putchar(nbr / 10 + '0');
	ft_putchar(nbr % 10 + '0');
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 98)
	{
		j = ++i;
		while (j <= 99)
		{
			ft_put_2d_nbr(i);
			ft_putchar(' ');
			ft_put_2d_nbr(j++);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	ft_put_2d_nbr(i);
	ft_putchar(' ');
	ft_put_2d_nbr(j++);
}
