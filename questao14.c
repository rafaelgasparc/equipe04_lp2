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
	float n, cont, soma;

	printf("digite o numero de termos: ");
	scanf("%f", &n);

	if (n==1)
	{
		printf("H= 1 \n");
		printf("Soma= 1 \n");
		return 0;
	}

	cont=2;
	soma=1;
	printf("H= 1 +");

	while(cont<n)
	{
		printf(" 1/%.0f + ", cont);
		soma=soma+(1/cont);
		cont=cont+1;
	}

	printf("1/%.0f \n",n);
	printf("A soma e: %.3f \n", soma + 1/n);
	return 0;
}
