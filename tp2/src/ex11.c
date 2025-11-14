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
	printf("entrez operation ");
	int op1;
	int op2;
	char* operand;
	scanf("%i %c %i", &op1, operand, &op2);
	printf("%f", parse_op(op1, op2, operand));

	return 0;

}

