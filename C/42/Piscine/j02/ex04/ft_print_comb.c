void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '7')
	{
		b = ++a;
		while (b < '8')
		{
			c = ++b;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c++);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}
