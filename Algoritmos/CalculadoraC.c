#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Universidade La Salle Academica Bruna Zinn Matrícula: 202213700 Curso: ADS\n\n");
    // cÓDIGO ADAPTADO DE https://www.youtube.com/watch?v=aISV1NBigW4
    // declara variaveis
    float Operacao1 = 0, Operacao2 = 0;
    int op;

    do
    {
        // imprime menu de operacoes
        printf("1 - RAIZ QUADRADA\n");
        printf("2 - SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO, POTENCIA\n");
        scanf("%i", &op);

        // le operadores
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &Operacao1);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &Operacao2);

        // switch case das operacoes matematicas
        switch (op)
        {
        case 1:
            printf("\n\t O, resultado da raiz da quadrada eh: %0.2f", sqrt(Operacao1));
            break;
        case 2:
            printf("\n\t O resultado da soma eh: %0.2f", Operacao1 + Operacao2);
            printf("\n\t O resultado da subtracao eh: %0.2f", Operacao1 - Operacao2);
            printf("\n\t O resultado da multiplicacao eh: %0.2f", Operacao1 * Operacao2);
            printf("\n\t O resultado da divisao eh: %0.2f", Operacao1 / Operacao2);
            printf("\n\t O resultado da potencia eh: %0.2f", pow(Operacao1, Operacao2));
            break;
        default:
            printf("\n Digite uma opcao valida\n");
            break;
        }

        // solicitacao opcao para continuar
        printf("\n Digite 1 para continuar: ");
        scanf("%i", &op);
    } while (op == 1);
}