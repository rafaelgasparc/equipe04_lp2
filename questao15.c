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
        float n, cont=1, cont2=1;
       {
                printf("digite um valor de termos:\n");
                scanf("%f",&n);

		printf("S= ");

                while(cont < n)
                {
                        printf("%.0f/%.0f+",cont,cont2);
                        cont=cont+1;
                        cont2=cont2+2;
                }
        }
        printf("%.0f/%.0f\n",n,cont2);
        return 0;
}

