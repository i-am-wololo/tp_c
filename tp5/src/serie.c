#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int* valeurs;
	unsigned int taille;
} serie;

serie creation_serie(unsigned int n) {
	serie s;
	s.valeurs = (int*)malloc(sizeof(int)*n);
	s.taille = n;
	return s;
}

void destruction_serie(serie* sptr) {
	free(sptr->valeurs);
	sptr->valeurs = NULL;
	sptr->taille = 0;
	printf("\nserie desalloue");
}

void affiche_serie(serie s) {
	printf("ptr %p\n", s.valeurs);
	printf(" s->taille %d\n", s.taille);
	printf("(%d", s.valeurs[0]);
	for (int i = 1; i < s.taille; i++) {
		printf(", %d", s.valeurs[i]);
	}
	printf(")");

}

float moyenne(serie *s) {
	if (s->valeurs == NULL || s->taille == 0) return NAN;
	float sum = 0;
	int n = s->taille;
	for (int i =0; i<n; i++) {
		sum += s->valeurs[i];
	}
	return sum/n;
}

float variance(serie *s) {
	if (s->valeurs == NULL || s->taille == 0) return NAN;
	float m = moyenne(s);
	float sum = 0;
	int n = s->taille;
	for (int i = 0; i<n; i++) {
		sum += (s->valeurs[i]-m)*(s->valeurs[i]-m);
	}
	return sum/n;
}


int main() {
	int nbvals;
	printf("nombre de valeurs: ");
	scanf("%d", &nbvals);

	serie s = creation_serie(nbvals);
	for (int i; i<s.taille;i++) {
		printf("Valeur %d/%d ", i+1, s.taille);
		scanf("%d", &s.valeurs[i]);
	}
	affiche_serie(s);
	printf("la moyenne est de %f\n", moyenne(&s));
	printf("la variance est de %f", variance(&s));
	destruction_serie(&s);

	return 0;
}
