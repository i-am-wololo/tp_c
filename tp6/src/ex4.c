#include <stdio.h>

int main() {
	float f;
	scanf("%f", &f);
	int bin = (int) f;
	for(int  i = 0; i<32; i++) {
		printf("%d", bin&1);
		bin = bin>>1;
	};
	return 0;
}
