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
