#include <stdio.h>


float parse_op(int n1, int n2, char* op) {
	switch(op[0]) {
		case '+' :
			return n1 + n2;
		case '*' :
			return n1*n2;
		case '-' :
			return n1-n2;
		case '/' :
			return n1/n2;
		case '%' :
			return n1%n2;
		
	};
};

int main() {
	int continuer = 1;
	while (continuer == 1) {
		printf("entrez operation ");
		int op1;
		int op2;
		char* operand;

		scanf("%i %c %i", &op1, operand, &op2);
		printf("%f\n", parse_op(op1, op2, operand));
		printf("continuez? [y/n]");

		char input;
		scanf("%c", &input);
		getchar();
		if (input == 'n') continuer = 0;
	}

	return 0;

}

