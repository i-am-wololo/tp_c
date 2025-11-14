#include <stdio.h>

int squaresums(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++ ){
		sum += i*i;
	};
	return sum;
};


int main() {
	int n;
	printf("entrez n: ");
	scanf("%i", &n);
	printf("%i", squaresums(n));
	return 0;
}
