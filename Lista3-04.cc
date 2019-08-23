#include <stdio.h>
//Questão 3.04
main ()
{
    int n;
    printf("Digite sua idade\n");
    scanf("%d",&n);
    if(n>=18 && n<=65)
    {
        printf("maior de idade\n\n");
    }
    else
    {
        if(n<18)
        {

            printf("menor de idade\n\n");
    }
    else
    {
        printf("idoso\n\n");
    }

}
}
