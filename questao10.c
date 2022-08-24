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
	int n, cont, cont1, div, div2, i;
	printf("Imprima os numeros primos de 1 a ");
	scanf("%d",&n);

	cont=1;
	div= 0;
	div2=0;

	while (cont<=n)
	{
		cont1=1;
		i=0;

		while(cont1 <= cont)
		{
			if ((cont%cont1)==0)
			{
				i=i+1;
				div= div+1;

			}

			else
			{
				div2=div2+1;
			}

			cont1=cont1+1;
		}

		if(i==2)
		{
			printf("|%d| ",cont);
		}

		cont=cont+1;
	}
	printf("\n O numero de divisoes e: %d \n", div+div2);

	return 0;
}
