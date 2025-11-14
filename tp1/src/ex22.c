#include <stdio.h>

int main() {
	char c = 65;
	int i = 2;
	float f = 3.0;
	double d = 4.0;
	printf("c=%d;i=%d;f=%f;d=%f\n", c, i, f, d);
	c+=1;i+=1;f+=1;d+=1;
	printf("c=%d;i=%d;f=%f;d=%f\n", c, i, f, d);

	return 0;
}
