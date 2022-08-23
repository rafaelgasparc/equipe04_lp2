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
