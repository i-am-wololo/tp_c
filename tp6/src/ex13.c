

#include <stdio.h>

int fib(int n) {
	if (n==0) return 0;
	if (n==1) return 1;
	return fib(n-1) + fib(n-2);
}


int main() {
	int input;
	printf("entrez valeur a calculer: ");
	scanf("%d", &input);
	printf("fib de %d est %d\n", input, fib(input));
	return 0;
}
