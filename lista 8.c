#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;

    do{
        printf("\nmenu de exercicio, digite -1 para encerrar\n");
        printf("exercicio 1\n");
        printf("exercicio 2\n");
        printf("exercicio 3\n");
        scanf("%d", &op);

        switch(op){

    case 1:
        printf("Faça o primeiro exercicio\n");
        break;
    case 2:
        printf("Faça o segundo exercicio\n");
        break;
    case 3:
        printf("Faça o terceiro exercicio\n");
        break;
    default:
        printf("exercicio invalido\n");

        }
    }while(op != -1);
}

