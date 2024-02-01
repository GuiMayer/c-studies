#include <stdio.h>

int main()
{
    int codigo_empregado, ano_nascimento, ano_engressado;
    int idade_empregado, tempo_trabalho, encerrar=1;
    
    while (encerrar != 0)
        {
        printf("Informe o código do funcionário: ");
        scanf("%i", &codigo_empregado);
        
        printf("Informe o ano de nascimento do funcionário: ");
        scanf("%i", &ano_nascimento);
        
        printf("Informe o ano que o funcionário entrou na empresa: ");
        scanf("%i", &ano_engressado);
        
        idade_empregado = (2023 - ano_nascimento);
        tempo_trabalho = 2023 - ano_engressado;
        
        printf("Idade do funcionário: %i", idade_empregado);
        printf("\nTempo trabalhado: %i", tempo_trabalho);
        
        if (idade_empregado >= 65)
        {
            printf("\nO funcionário é apto a se aposentar.");
        }
        else if (tempo_trabalho >= 30)
        {
            printf("\nO funcionário é apto a se aposentar.");
        }
        else if (idade_empregado >= 60 && tempo_trabalho >= 25)
        {
            printf("\nO funcionário é apto a se aposentar.");
        }
        else
        {
            printf("\nO funcionário não é apto a se aposentar.\n");
        }
        
        printf("Digite 0 se deseja encerrar.");
        scanf("%i", &encerrar);
    }

    return 0;
}
