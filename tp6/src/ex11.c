#include <stdio.h>

int factoriel(int n)  {
	if (n == 1) return 1;
	return n*factoriel(n-1);
}


int main() {
	int input;
	printf("entrez valeur a calculer: ");
	scanf("%d", &input);
	printf("sa factorielle est %d\n", factoriel(input));
	return 0;
}
