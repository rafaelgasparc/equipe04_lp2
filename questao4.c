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
        int a, b;
        printf("valor digitado:\n");
        scanf("%d",&a);

        printf("valor digitado:\n");
        scanf("%d",&b);

        int cont=a;

        while(cont<=b)
        {
                printf("numeros compreendidos:%d\n",cont);
                cont++;
        }

        return 0;
}
