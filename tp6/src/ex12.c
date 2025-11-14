
#include <stdio.h>

int somme(int n) {
	if (n == 0) return 0;
	return n + somme(n-1);
}


int main() {
	int input;
	printf("entrez valeur a calculer: ");
	scanf("%d", &input);
	printf("la somme de 1 à %d est %d\n", input, somme(input));
	return 0;
}
