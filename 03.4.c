#include <stdio.h>
#include <math.h>
main()
{
    int n, raiz;
    printf("Digite um numero\t");
    scanf("%d", &n);
    if(n>=0)
    {
        raiz = sqrt(n);
        printf("A raiz quadrada dele e... %d\n\n\n ", raiz);

    }
    else
    {
        printf("Numero invalido\n\n\n\n");
    }
}
