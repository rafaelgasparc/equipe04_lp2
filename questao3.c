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
