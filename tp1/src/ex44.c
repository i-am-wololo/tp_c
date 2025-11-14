#include <stdio.h>

int main() {
	int x, y, z;
	printf("x, y, z: ");
	scanf("%d %d %d", &x, &y, &z);
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	printf("resultat expression: %d\n", ++x || (++y > z && (y*++z)));
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	return 0;
}
