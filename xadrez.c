// xadrez.c
// Simulação da movimentação de peças de xadrez usando estruturas de repetição em C
// Nível NOVATO

#include <stdio.h>

// Constantes que definem o número de casas que cada peça deve se mover
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

int main() {
    int i;

    // ------------------ MOVIMENTO DA TORRE ------------------
    // A torre se move 5 casas para a direita
    // Utilizando estrutura de repetição: FOR
    printf("Torre:\n");
    for (i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // ------------------ MOVIMENTO DO BISPO ------------------
    // O bispo se move 5 casas na diagonal superior direita
    // Utilizando estrutura de repetição: WHILE
    printf("\nBispo:\n");
    i = 0;
    while (i < MOV_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }

    // ------------------ MOVIMENTO DA RAINHA ------------------
    // A rainha se move 8 casas para a esquerda
    // Utilizando estrutura de repetição: DO-WHILE
    printf("\nRainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);

    return 0;
}
