#include <stdio.h>
int pgcd(unsigned int a, unsigned int b) {
	if (b != 0) {
		return pgcd(b, a%b);
	}
	else return a;
};

int main() {
	unsigned int input;
	unsigned int inp;
	printf("entrez valeur a calculer: ");
	scanf("%d", &input);
	printf("entrez 2nd valeur: ");
	scanf("%d", &inp);
	printf("le pgcd est %d", pgcd(input, inp));
	return 0;
}
