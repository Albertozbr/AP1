#include <stdio.h>
#include<locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;
 {
        // Exibe o menu

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                printf("exercicio 1");
                break;
            }
            case 2: {
                printf("exercicio 2");
                break;
            }
            case 3: {
                printf("exercico 3");
                break;
            }

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}

