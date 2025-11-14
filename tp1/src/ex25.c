#include <stdio.h>

int expr(int a, int b) {
	printf("%d\n", (a && !b) || (!a && b));
};

int main() {
	int a, b;
	a, b = 0, 0;
	expr(a, b);
	a, b = 0, 1;
	expr(a, b);
	a, b = 1, 0;
	expr(a, b);
	a, b = 1, 1;
	expr(a, b);
}


