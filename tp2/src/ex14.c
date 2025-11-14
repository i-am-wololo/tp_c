#include <stdio.h>

int countdigits(int nb) {
	int digits = 0;
	while (nb/10 > 0) {
		nb = nb/10;
		digits++;
	};
	return digits+1;
};

int main() {
	int nb;

	printf("entrez un nombre\n");
	scanf("%i", &nb);

	int digits = countdigits(nb);
	printf("\n contient %i chiffres", digits);

	return 1;
}
