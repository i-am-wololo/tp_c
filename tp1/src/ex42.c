#include <stdio.h>

int main() {
	int r;
	printf("entrez rayon: ");
	scanf("%d", &r);
	float perim = 2*3.14*r;
	float aire = 3.14*r*r;
	printf("perimetre: %f aire: %f", perim, aire);
	return 0;
}
