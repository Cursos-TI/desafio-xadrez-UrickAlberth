#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void mover_torre(int casas, int contador) {
    // Caso base: se o contador ultrapassar o número de casas, parar
    if (contador > casas) {
        return;
    }
    // Imprimir movimento
    printf("Direita\n");
    // Chamar recursivamente para a próxima casa
    mover_torre(casas, contador + 1);
}

// Função recursiva para o movimento do Bispo (diagonal cima-direita) com loops aninhados
void mover_bispo(int casas, int contador) {
    // Caso base: se o contador ultrapassar o número de casas, parar
    if (contador > casas) {
        return;
    }
    // Loop externo para o movimento vertical (cima)
    for (int i = 1; i <= 1; i++) {
        // Loop interno para o movimento horizontal (direita)
        int j = 1;
        while (j <= 1) {
            printf("Cima, Direita\n");
            j++;
        }
    }
    // Chamar recursivamente para a próxima casa
    mover_bispo(casas, contador + 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void mover_rainha(int casas, int contador) {
    // Caso base: se o contador ultrapassar o número de casas, parar
    if (contador > casas) {
        return;
    }
    // Imprimir movimento
    printf("Esquerda\n");
    // Chamar recursivamente para a próxima casa
    mover_rainha(casas, contador + 1);
}

// Função principal
int main() {
    // Variáveis para definir o número de casas a serem movidas
    int torre_casas = 5;      // Torre: 5 casas para a direita
    int bispo_casas = 5;      // Bispo: 5 casas na diagonal (cima e direita)
    int rainha_casas = 8;     // Rainha: 8 casas para a esquerda
    int cavalo_cima = 2;      // Cavalo: 2 casas para cima
    int cavalo_direita = 1;   // Cavalo: 1 casa para a direita
    
    // Simulação do movimento da Torre usando recursividade
    printf("Movimento da Torre:\n");
    mover_torre(torre_casas, 1);
    
    // Simulação do movimento do Bispo usando recursividade e loops aninhados
    printf("\nMovimento do Bispo:\n");
    mover_bispo(bispo_casas, 1);
    
    // Simulação do movimento da Rainha usando recursividade
    printf("\nMovimento da Rainha:\n");
    mover_rainha(rainha_casas, 1);
    
    // Simulação do movimento do Cavalo usando loops aninhados complexos
    printf("\nMovimento do Cavalo:\n");
    int total_passos = cavalo_cima + cavalo_direita; // Total de casas a percorrer
    int passo_atual = 1; // Controla o número de passos dados
    // Loop externo para controlar o total de passos
    for (int i = 1; i <= total_passos; i++) {
        // Loop interno para gerenciar direções com condições
        int direcao = 1;
        while (direcao <= 1) {
            // Se ainda precisamos mover para cima (primeiros 2 passos)
            if (passo_atual <= cavalo_cima) {
                printf("Cima\n");
            } else if (passo_atual == cavalo_cima + 1) {
                // Último passo para a direita
                printf("Direita\n");
                break; // Sai do loop interno após mover para a direita
            } else {
                continue; // Pula iterações desnecessárias
            }
            passo_atual++;
            direcao++;
        }
        // Se já completou todos os passos, sai do loop externo
        if (passo_atual > total_passos) {
            break;
        }
    }
    
    return 0;
}
