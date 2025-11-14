#include <stdio.h>

int main() {
	int sum = 0;
	float n = 0;
	int input = 0;
	while (input >= 0) {
		printf("entrez un nombre(0< pour terminer)\n");
		scanf("%i", &input);
		getchar();
		if (input <0) break;

		n+=1;
		sum += input;
	};

	printf("\n %f", sum/(n*1.0));
	
	return 0;
}

