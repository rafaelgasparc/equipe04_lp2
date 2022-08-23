#include <stdio.h>
int main(int argc, char **argv)
{
	float n, cont, soma;

	printf("digite o numero de termos: ");
	scanf("%f", &n);

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
