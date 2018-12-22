int		luhn_algorithm(char *str) {
	int		is_odd;
	int		index;
	int		total;

	is_odd = 1;
	index = 0;
	total = 0;
	while (str[i + 1])
		i++;
	while (index >= 0) {
		if (is_odd) {
			total += str[i] - '0';
			is_odd--;
		}
		else {
			total += (str[i] - '0') x 2 % 10 +
					 (str[i] - '0') x 2 / 10;
			is_odd++;
		}
		index--;
	}
	if (total / 10 == 0)
		return (1);
	return (0);
}