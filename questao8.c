/*
	Rafael Lucas Gaspar Da cruz-1615100348
	Mateus Mamede da Silva Marques-2015180069
	Rosemiro Andrade da Silva-1515180065
	Sergio Campos Rodrigues filho-2115200039
	Paulo Yan Monteiro de Paiva-2015100110
	Talles Victorio Oliveira da Silva-1915090086
*/

#include <stdio.h>
int main (int argc, char **argv)
{
	int a, n1, n2, n3, cont;

	cont=3;
	n1=1;
	n2=2;

	printf("Digite quantos termos a sequencia deve ter:");
	scanf("%d", &a);

	if(a==1)

	{
		printf("1 \n");
		return 0;
	}

	if (a==2)

	{
		printf("1 - 1 \n");
		return 0;
	}

	printf("%d - %d ", n1, n2);

	while (cont<=a)
	{
		n3= n1+n2;
		printf("- %d", n3);
		n1=n2;
		n2=n3;
		cont++;
	}

	printf("\n");

	return 0;
}

