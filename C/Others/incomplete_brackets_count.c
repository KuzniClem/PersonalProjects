#include <unistd.h>

void set_tab(int nb, char *tab) {
	int i = 0;

	while (i < nb) {
		tab[i] = nb + '0' - i - 1;
		i++;
	}
}

void put_tab(int nb, char *tab) {
	while (nb > 0) {
		nb--;
		putchar(tab[nb]);
	}
}

void carry(int pos, char *tab, int nb) {
	if (pos < nb - 1 && tab[pos] == '9' - pos) {
		carry(pos + 1, tab, nb);
	}
	else {
		tab[pos]++;
		return;
	}
	tab[pos] = tab[pos + 1] + 1;
}

void print_combin(int nb) {
	char tab[10];

	set_tab(nb, tab);
	while (tab[nb - 1] < 10 - nb + '0') {
		put_tab(nb, tab);
		if (tab[0] == '9')
			carry(0, tab, nb);
		else
			tab[0]++;
		putchar(',');
		putchar(' ');
	}
	put_tab(nb, tab);
}