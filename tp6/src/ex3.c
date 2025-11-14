#include <stdio.h>

unsigned char encode(unsigned char r, unsigned char g, unsigned char b) {
	unsigned char color = r;
	color = (color<<3) + g;
	color = (color<<2) + b;
	return color;
}

void decode(unsigned char color, unsigned char *r,
		     unsigned char *g,
		     unsigned char *b) 
{
	*b = (color<<6)>>6;
	*g = (color<<3)>>5;
	*r = color>>5;

}


int main() {
	unsigned char r, g, b;
	printf("entrez r, g, b a la suite\n");
	scanf("%hhu, %hhu, %hhu", &r, &g, &b);
	unsigned char resultcolor = encode(r, g, b);
	printf("l'entier representant la couleur encodé est %u \n", encode(r, g, b));
	unsigned char rd, gd, bd;
	decode(resultcolor, &rd, &gd, &bd);
	printf("décodé donne r=%d, g=%d, b=%d", rd, gd, bd);
	return 0;
}

