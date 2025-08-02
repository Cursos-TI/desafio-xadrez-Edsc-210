#include <stdio.h>

int main() {
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

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

    printf("--- Fim da Simulação ---\n");

    return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
