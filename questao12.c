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
	int n, inv;
	printf("Digite o numero a ser invertido: ");
	scanf("%d", &n);

	while(n>0)
	{
		inv= n%10;
		printf("%d", inv);
		n=n/10;
	}

	printf("\n");

	return 0;
}
