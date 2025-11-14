#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int* valeurs;
	unsigned int taille;
} serie;

typedef struct {
	serie** classes;
	unsigned int nb_classe;
} ecole;

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



ecole creation_ecole(unsigned int nb_classes) {
	if (nb_classes < 1) {
		ecole e;
		e.classes = NULL;
		e.nb_classe = 0;
		return e;
	};
	ecole e;
	e.nb_classe = nb_classes;
	return e;
}
void saisie_ecole(ecole* e) {
	for (int i = 0; i< e->nb_classe; i++) {
		printf("classe %d\n", i+1);
		printf("combien d'éleves?\n");
		int nbeleves;
		scanf("%d", &nbeleves);
		serie classe = creation_serie(nbeleves);
		printf("assignation des notes...\n");
		for (int j = 0; j<nbeleves; j++) {
			int valeur;
			printf("eleve %d/%d: ", j+1, nbeleves);
			scanf("%d", &valeur);
			classe.valeurs[j] = valeur;
		}

		e->classes[i] = &classe;

	}
}

int main() {
	int nbcl;
	printf("nombres de classes dans l'école: ");
	scanf("%d", &nbcl);
	ecole e = creation_ecole(nbcl);
	saisie_ecole(&e);
}
