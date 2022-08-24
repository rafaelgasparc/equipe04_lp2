/*
	Rafael Lucas Gaspar Da cruz-1615100348
	Mateus Mamede da Silva Marques-2015180069
	Rosemiro Andrade da Silva-1515180065
	Sergio Campos Rodrigues filho-2115200039
	Paulo Yan Monteiro de Paiva-2015100110
	Talles Victorio Oliveira da Silva-1915090086
*/

#include <stdio.h>
int main(int argc, char ** argv)
{
	int b, e, cont, r;

	cont=3;

	printf("Digite o valor da base: \n");
	scanf("%d", &b);
	printf("Digite o valor do expoente: \n");
	scanf("%d", &e);

	r=b*b;

	if (e==0)
	{
		r= 1;
		printf("O resultado e: %d \n", r);
		return 0;
	}

	if (e==1)
	{
		r= b;
		printf("O resultado e: %d \n", r);
		return 0;
	}

	if (e==2)
	{
		r= b*b;
		printf("O resultado e: %d \n", r);
		return 0;

	}

	while (cont>=3 && cont <= e)
	{
		r= r*b;
		cont= cont + 1;
	}

	printf("O resultado e: %d \n", r);

	return 0;
}
