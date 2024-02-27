#include <stdio.h>


int main()
{

    int again=0;
    while (again == 0)
    {
        int num, inicio_tabuada, final_tabuada, i;
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);
        printf("Digite o comeco da tabuada: ");
        scanf("%i", &inicio_tabuada);
        printf("Digite o final da tabuada: ");
        scanf("%i", &final_tabuada);
        
        for(i=inicio_tabuada; i<=final_tabuada; i++)
        {
            printf("%i x %i = %i\n", num, i, num*(i));
        }

        printf("0 para continuar\n");
        scanf("%i", &again);
    }

    return 0;
}
