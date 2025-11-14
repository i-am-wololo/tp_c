#include <stdio.h>
#include <math.h>

void main() {
	int a, b, c = 0;
	printf("entrez coeffs\n");
	scanf("%i, %i, %i", &a, &b, &c);
	int delta = a*a - 4*b*c;
	if (delta<0) {
		printf("\nno solutions \n");
	} else if (delta == 0) {
		printf("solution est %i", -b*(2*a));
	}
	else {
		printf("solution sont %f et %f", (-b-sqrt(delta)/2*a), (-b+sqrt(delta)/2*a));
	};

}
