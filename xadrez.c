#include <stdio.h>

void moveTorre(int passosRestantes);
void moveBispo(int passosRestantes);
void moveRainha(int passosRestantes);

int main() {
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;
    const int movimentosCavaloCima = 2;
    const int movimentosCavaloDireita = 1;

    printf("--- Simulação de Movimento de Peças de Xadrez (Nível Mestre) ---\n\n");

    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    moveTorre(movimentosTorre);
    printf("\n");

    printf("--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    moveBispo(movimentosBispo);
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    moveRainha(movimentosRainha);
    printf("\n");

    printf("--- Movimento do Cavalo (em 'L': 2 para cima, 1 para a direita) ---\n");
    int passosParaCimaDados = 0;
    int passosParaDireitaDados = 0;
    int totalPassos = movimentosCavaloCima + movimentosCavaloDireita;

    for (int passoAtual = 1; passoAtual <= totalPassos; passoAtual++) {
        if (passosParaCimaDados < movimentosCavaloCima) {
            printf("Cima\n");
            passosParaCimaDados++;
            continue;
        }
        
        if (passosParaDireitaDados < movimentosCavaloDireita) {
            printf("Direita\n");
            passosParaDireitaDados++;
        }
        
        if (passosParaCimaDados == movimentosCavaloCima && passosParaDireitaDados == movimentosCavaloDireita) {
            break;
        }
    }
    printf("\n");
    
    printf("--- Fim da Simulação ---\n");

    return 0;
}

void moveTorre(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;
    }
    printf("Direita\n");
    moveTorre(passosRestantes - 1);
}

void moveBispo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;
    }
    
    for (int movVertical = 0; movVertical < 1; movVertical++) {
        for (int movHorizontal = 0; movHorizontal < 1; movHorizontal++) {
            printf("Cima, Direita\n");
        }
    }
    moveBispo(passosRestantes - 1);
}

void moveRainha(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moveRainha(passosRestantes - 1);
}