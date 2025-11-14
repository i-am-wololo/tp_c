#include <stdio.h>

int digits(int n) {
	if (n == 0) return 0;
	if (n>0) return 1 + digits(n/10);
	else return 1+ digits(-n/10);
}

int main() {
	int input;
	printf("entrez valeur a calculer: ");
	scanf("%d", &input);
	printf("le nombre contient %d chiffres", digits(input));
	return 0;
}
