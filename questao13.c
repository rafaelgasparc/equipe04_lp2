#include <stdio.h>

int main(int argc, char **argv)
{
        float n, cont=2, cont2=3, soma=1;
        printf("digite os termos:\n");
        scanf("%f",&n);
        printf("S=1+");

        while(cont<n)
        {
                printf("%.0f/%.0f+",cont,cont2);
                soma=soma+(cont/cont2);
                cont=cont+1;
                cont2=cont2+2;
        }
        printf("%.0f/%.0f\n",n,cont2);
        printf("a soma é:%f\n",soma+n/cont2);
        return 0;
}
