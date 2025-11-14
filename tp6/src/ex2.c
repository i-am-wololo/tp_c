#include <stdio.h>

int collatz(unsigned int n) {
	if ((n & 1) == 0) return n/2;
	else return 3 * n + 1;
}

void syracuse(unsigned int n) {
	int result = collatz(n);
	printf("%d, ", result);
	if (result != 1) syracuse(result);

}

int temps_de_vol(unsigned int x) {
	int result = collatz(x);
	if (result != 1) return 1+temps_de_vol(result);
	else return 1;

}
int altitude(unsigned int x)  {
	if (x == 1) return 1;
	unsigned int result = altitude(collatz(x));
	if (result> x) return result;
	return x;

}

int main() {
	unsigned int input;
	printf("entrez un nombre: ");
	scanf("%u", &input);
	printf("f(%u) = %u\n", input, collatz(input));

	printf("la suite syracuse est: ");
	syracuse(input);

	printf("\nle te,ps de vol est de %d\n", altitude(input));
	printf("l'altitude est de %d\n", altitude(input));

	return 0;
}
