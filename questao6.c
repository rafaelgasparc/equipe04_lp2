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
