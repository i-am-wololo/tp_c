#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* creation_memoire(unsigned int n) {
	return malloc(sizeof(int)*n);
}

void affiche_serie(int *s, unsigned int l) {
}

void destruction_serie(int** ps) {
	free(*ps);
	ps = NULL;
}

float moyenne(int* s, unsigned int n) {
	if (s == NULL || n == 0) return NAN;
	float sum = 0;
	for (int i =0; i<n; i++) {
		sum += s[i];
	}
	return sum/n;

}

int* tri_croissant(int* s, unsigned int n) {
	int* copy = creation_memoire(5);
	// copie de s dans un autre buffer
	for (int i = 0; i<n; i++) {
		copy[i] = s[i];
	}

	unsigned int i, j, min; // Indices
	int c; 
	if (n > 1){
		for(i = 0; i < n-1; i++){         
		    min = i;
		    for(j = i+1; j < n; j++)
			if ( copy[j] < copy[min] )    
			    min = j;
		  
		    // Echange de t[i] et t[min]
		    if (min != i){
			c = copy[i];
			copy[i] = copy[min];
			copy[min] = c;
		    }
		}
	}
	return copy;

}

float mediane(int* s, unsigned int n) {
	if (s == NULL || n == 0) return NAN;
	
	int m = (n%2 == 0) ? n/2 : (n+1)/2;
	return s[m];
}

float variance(int* s, unsigned int n) {
	if (s == NULL || n == 0) return NAN;
	float m = moyenne(s, n);
	float sum = 0;
	for (int i = 0; i<n; i++) {
		sum += (s[i]-m)*(s[i]-m);
	}
	return sum/n;
}

int main() {
	int *serie = creation_memoire(5);
	for (int i = 0; i< 5; i++) {
		printf("Valeur %d/5 ", i+1);
		scanf("%d", &serie[i]);
	}
	float m = moyenne(serie, 5);
	printf("la moyenne de ");
	affiche_serie(serie, 5);
	printf(" est de %f\n", m);

	float v = variance(serie, 5);
	printf("la variance est de %f\n", v);

	int* tri = tri_croissant(serie, 5);
	printf("trié \n");
	affiche_serie(tri, 5);
	printf("\n");

	printf("la medianne est %f\n", mediane(serie, 5));

	destruction_serie(&serie);
	destruction_serie(&tri);
	return 0;
}
