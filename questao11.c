/*
	RAFAEL LUCAS GASPAR DA CRUZ- 1615100348
*/

#include <stdio.h>
int main(int argc, char **argv)
{
	int n,m, cont, fat;

	printf("Fatorial de: ");
	scanf("%d",&n);

	m=n;
	fat= 1;
	
	if (n==0)
	{
		printf("0!= 1 \n");
		return 0;
	}

	if(n==1)
	{
		printf("1!= 1 \n");
		return 0;
	}

	while (n>1)
	{
		fat= fat*n;
		n=n-1;
	}
	printf ("%d!=", m);
	while(m>1)
	{
		printf("%d.", m);
		m=m-1;
	}
	printf("1= %d \n", fat);

	return 0;
}
