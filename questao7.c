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
        int pares=0,impares=0, cont=1, quant;

        while(cont<=10)
        {
                printf("total(par,impar):\n");
                scanf("%d",&quant);

                if(quant%2==0)
                {
                        pares=pares+1;
                }

                else
                {
                        impares=impares+1;
                }

                cont=cont+1;

        }

        printf("pares:%d\n",pares);
        printf("impares:%d\n",impares);

        return 0;
}
