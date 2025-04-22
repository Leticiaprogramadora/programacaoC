#include <stdio.h>

// Função recursiva para movimentar a Torre (Direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo (Cima Direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para movimentar a Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Movimento da Torre (Recursivo)
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(movimentosTorre);

    // Movimento do Bispo (Recursivo)
    int movimentosBispo = 5;
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(movimentosBispo);

    // Movimento do Bispo com Loops Aninhados (Vertical e Horizontal)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    int passosDiagonais = 5;
    for (int i = 0; i < passosDiagonais; i++) {
        for (int j = 0; j < 1; j++) { // um passo horizontal por passo vertical
            printf("Cima Direita\n");
        }
    }

    // Movimento da Rainha (Recursivo)
    int movimentosRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentosRainha);

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    printf("\nMovimento do Cavalo:\n");
    int movimentosVerticais = 2;   // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita

    for (int i = 0; i <= movimentosVerticais; i++) {
        if (i == 1) continue; // pula o meio da subida para simular o "L"
        printf("Cima\n");
        for (int j = 0; j < 2; j++) {
            if (j != 1) continue; // garante que a direita seja impressa só após 2 verticais
            printf("Direita\n");
            break; // encerra após a combinação completa do "L"
        }
    }

    return 0;
}
