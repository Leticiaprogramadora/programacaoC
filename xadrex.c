#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a Direita (usando for)
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na Diagonal (Cima Direita) (usando while)
    int movimentosBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha - 8 casas para a Esquerda (usando do-while)
    int movimentosRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    return 0;
}
