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
	int cont, a;
	cont=1;

	while (cont <= 50)
	{
		if ((cont%2) != 0)
		{
			printf("%d \n", cont);
		}

		cont=cont+1;
	}

	return 0;
}
