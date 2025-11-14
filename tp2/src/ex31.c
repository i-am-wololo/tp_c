#include <stdio.h>

int factoriel(int n) {
	int product = 1;
	for (int i = 1; i<=n; i++){
		product = product*i;	
	};
	return product;
}



void main() {
	int nb;
	printf("entrez un nombre");
	scanf("%i", &nb);
}
