#include <stdio.h>
int main(int argc, char **argv)
{
	int cont;
	float a, soma, media;
	cont= 1;
	soma= 0;

	while (cont <=5)
	{
		printf("digite o %d.o numero: \n",cont);
		scanf("%f", &a);
		soma=soma + a;
		media= soma/5;
		cont= cont+1;
	}

	printf("O valor da soma e: %.2f \n", soma);
	printf("O valor da media e: %.2f \n", media);

	return 0;
}
