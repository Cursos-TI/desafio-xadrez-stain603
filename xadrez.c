#include <stdio.h>

int main() {
    // Simulação da Torre com estrutura FOR
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Simulação do Bispo com estrutura WHILE
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Simulação da Rainha com estrutura DO-WHILE
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
