#include <stdio.h>
int main(int argc, char **argv)
{
	int a;
	printf("Digite a nota: \n");
	scanf("%d", &a);

	while (a<0 || a>10)
	{
		printf("nota invalida, digite uma nova nota: ");
		scanf("%d", &a);
	}
	return 0;
}
