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
