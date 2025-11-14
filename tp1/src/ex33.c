#include <stdio.h>

int main() {
	int a;
	char b;
	char c;
	printf("entrez entier, puis char, puis char: ");
	scanf("%d %c %c", &a, &b, &c);
	printf("%d, %c, %c", a, b, c);

	return 0;
}
