#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* name;
	char* firstname;
	unsigned short age;
} Personne;

typedef struct Voisin Voisin;

struct Voisin {
	Personne* pers;
	Voisin* prec;
	Voisin* suivant;
};


typedef struct{
	Voisin* first;
	Voisin* last;
} Rue;


Personne* lirePersonne(){
	Personne* person = malloc(sizeof(Personne));
	person->name = malloc(sizeof(char)*255);
	person->firstname = malloc(sizeof(char)*255);
	printf("entrez un nom prenom et age séparés d'un espace\n");
	scanf("%s %s %hi", person->name, person->firstname, &person->age);
	return person;
};

Voisin* creerVoisin(){
	Voisin* voisin = (Voisin*)malloc(sizeof(Voisin));
	voisin->prec = NULL;
	voisin->suivant = NULL;
	voisin->pers = lirePersonne();
	return voisin;
}

Rue* Population(){
	Rue* rue = (Rue*)malloc(sizeof(Rue));
	rue->last = creerVoisin();
	Voisin* voisin = rue->last;

	printf("continue? [y/n]\n");
	getchar();
	char reponse[10];
	scanf("%s", reponse);
	printf("reponse donné: %s", reponse);
	while (strcmp(reponse,"yes") == 0) {
		voisin->prec = creerVoisin();
		voisin = voisin->prec;
		getchar();
		printf("continue? [y/n]\n");
		scanf("%s", reponse);
		printf("\n");
	};
	rue->first = voisin;
	return rue;
};

int voisinsAvant(Voisin* v){
	if (v == NULL) return -1;
	Voisin* voisin = v;
	int i = 0;
	while (voisin->prec != NULL) {
		voisin = voisin->prec;
		i++;
	}
	return i;
}

int voisinsApres(Voisin* v);


int main(){
	Rue* rue = Population();
	Voisin* firstvoisin = 	
	return 0;
}
