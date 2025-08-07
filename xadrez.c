#include <stdio.h>

int main() {
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;
    const int movimentosCavaloBaixo = 2;
    const int movimentosCavaloEsquerda = 1;

    printf("--- Simulação de Movimento de Peças de Xadrez ---\n\n");

    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    int casasMovidasBispo = 0;
    while (casasMovidasBispo < movimentosBispo) {
        printf("Cima, Direita\n");
        casasMovidasBispo++;
    }
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int casasMovidasRainha = 0;
    do {
        printf("Esquerda\n");
        casasMovidasRainha++;
    } while (casasMovidasRainha < movimentosRainha);
    
    printf("\n");

    printf("--- Movimento do Cavalo (em 'L': 2 para baixo, 1 para a esquerda) ---\n");
    for (int manobraL = 0; manobraL < 1; manobraL++) {
        int passoVertical = 0;
        while (passoVertical < movimentosCavaloBaixo) {
            printf("Baixo\n");
            passoVertical++;
        }
        
        int passoHorizontal = 0;
        do {
            printf("Esquerda\n");
            passoHorizontal++;
        } while (passoHorizontal < movimentosCavaloEsquerda);
    }

    printf("\n");

    printf("--- Fim da Simulação ---\n");

    return 0;
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
