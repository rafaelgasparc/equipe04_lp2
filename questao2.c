/*
	Rafael Lucas Gaspar Da cruz-1615100348
	Mateus Mamede da Silva Marques-2015180069
	Rosemiro Andrade da Silva-1515180065
	Sergio Campos Rodrigues filho-2115200039
	Paulo Yan Monteiro de Paiva-2015100110
	Talles Victorio Oliveira da Silva-1915090086
*/

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
