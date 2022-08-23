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
	int cont, a, maior;
	cont=1;
	maior=a;

	while (cont <= 5)
	{
		printf ("digite o %d.o numero: \n", cont);
		scanf ("%d", &a);
		cont= cont+1;

		if (a>=maior)
		{
			maior=a;
		}
	}

	printf("o maior e o %d \n", maior);

	return 0;
}
