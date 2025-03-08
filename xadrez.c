#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima, Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal superior direita)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima e 1 para a direita)
    printf("Movimento do Cavalo:\n");
    int moveCount = 0;
    while (moveCount < 1) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
            if (i == 1) continue; // Apenas para mostrar o uso do continue
        }
        printf("Direita\n");
        moveCount++;
    }
    printf("\n");
    
    // Implementação alternativa do Bispo com loops aninhados
    printf("Movimento alternativo do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
            if (i == 3) break; // Apenas para demonstrar o uso do break
        }
    }
    printf("\n");
    
    return 0;
}
