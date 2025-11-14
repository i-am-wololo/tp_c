#include <stdio.h>

int smallestsq(int n) {
	int i = 1;
	while (i*i < n) i++;
	return i*i;
};

int main() {
	int nb;
	printf("entrez un nombre: \n");
	scanf("%i", &nb);
	int square = smallestsq(nb);
	printf("le plus petit carré superieur est: %i \n", square);
	return 0;
}

