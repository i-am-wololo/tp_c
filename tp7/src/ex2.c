#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char* name;
	char* firstname;
	unsigned short age;
} Personne;

typedef struct {
	Personne* pers;
	Voisin* prec;
	Voisin* suivant;

} Voisin;

typedef struct {
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

Rue* Population() {
	Rue* rue = malloc(sizeof(Rue));
	Voisin* voisin = malloc(sizeof(voisin));
	voisin->pers = lirePersonne();
	rue->first = voisin;
	printf("continuer? [y/n]\n");
	char* reponse;
	scanf("%s", reponse);
	while (reponse == "yes") {
		printf("continue? [y/n]");
		scanf("%s", response);
	}
};

