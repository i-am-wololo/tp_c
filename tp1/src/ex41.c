#include <stdio.h>

int main() {
	int rawdate;
	printf("entrez une date:");
	scanf("%d", &rawdate);
	printf("\njour: %d mois: %d annee: %d", rawdate%100, (rawdate/100)%1000, rawdate/10000);
	return 0;
}
