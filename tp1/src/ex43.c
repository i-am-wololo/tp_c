#include <stdio.h>

int main() {
	int x, y;
	int z, t;
	printf("entrez x, y séparé par un espace: ");
	scanf("%d %d", &x, &y);

	printf("\nentrez x, y séparé par un espace deuxieme vecteur: ");
	scanf("%d %d", &z, &t);
	printf("produit scalaire des deux vecteurs: %d", x*z+y*t);

	return 0;
	
}
