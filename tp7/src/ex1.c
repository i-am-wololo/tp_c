#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	unsigned short number;
	char* name;
	unsigned int ZIP;
	char* city;
} Adresse;

typedef struct {
	char* name;
	char* firstname;
	unsigned short age;
	Adresse* adresse;
} Personne;

Adresse* lireAdresse(){
	Adresse* adresse = malloc(sizeof(Adresse));
	adresse->name = malloc(sizeof(char)*255);
	adresse->city = malloc(sizeof(char)*255);
	printf("entrez le code postal, le nom de la ville, le numéro de la rue séparés d'un espace\n");
	scanf("%i %s %hi", 
       		&adresse->ZIP,
       		adresse->city,
       		&adresse->number
       	);
	printf("entrez le nom de la rue\n");
	scanf("%s", adresse->name);
	return adresse;
};

Personne* lirePersonne(){
	Personne* person = malloc(sizeof(Personne));
	person->name = malloc(sizeof(char)*255);
	person->firstname = malloc(sizeof(char)*255);
	printf("entrez un nom prenom et age séparés d'un espace\n");
	scanf("%s %s %hi", person->name, person->firstname, &person->age);
	person->adresse = lireAdresse();
	return person;
};

void printAdresse(Adresse* adresse) {
	if (adresse == NULL) return;
	printf("Numéro de rue: %hi\n", adresse->number);
	printf("Nom de rue: %s\n", adresse->name);
	printf("Ville: %s\n",adresse->city);
	printf("Code postal: %hi\n", adresse->ZIP);
};

void printPersonne(Personne* personne) {
	if (personne == NULL) return;
	printf("Nom: %s\n", personne->name);
	printf("Prénom: %s\n", personne->firstname);
	printf("Age: %hi\n", personne->age);
}

int memeAdresse(Personne* a, Personne* b) {
	Adresse* ad_a= a->adresse;
	Adresse* ad_b = b->adresse;
	if(
		(strcmp(ad_a->name, ad_b->name) == 0) &&
		(strcmp(ad_a->city, ad_b->city) == 0) &&
		(ad_a->ZIP == ad_b->ZIP) &&
		(ad_a->number == ad_b->number)
	) return 1;
	return 0;
	
}

int main() {

	Personne* personne = lirePersonne();
	Adresse* adresse = personne->adresse;
	printPersonne(personne);
	printAdresse(personne->adresse);
	return 0;
}
