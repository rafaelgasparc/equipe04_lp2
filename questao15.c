/*Mateus
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

