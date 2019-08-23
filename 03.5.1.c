#include <stdio.h>
#include <math.h>
main()
{
    float altura, peso_ideal_m, peso_ideal_f;
    char sexo;
    printf("Digite a sua altura [em metros]:\t");
    scanf("%f", &altura);
    printf("Digite o seu sexo [F] ou [M]:\t");
    scanf("%s", &sexo);
    if(sexo == 'M')
    {
        peso_ideal_m = ((72.7*altura)-58.0);
        printf("Seu peso ideal eh:%f\t\n\n\n\n\n", peso_ideal_m);
    }
    else if (sexo == 'F')
    {
        peso_ideal_f = ((62.1*altura)-44.7);
        printf("Seu peso ideal eh: %f\t\n\n\n\n\n", peso_ideal_f);
    }
    else
    {
        printf("Opcao Invalida\n\n\n\n\n");
    }
}
