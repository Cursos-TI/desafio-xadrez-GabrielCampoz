#include <stdio.h>

// Declaração das funções
void moverRainha(int casas);
void moverTorre(int casas);
void moverBispo(int casas);
void moverCavalo();

int main() {
    int escolha;

    // Menu de opções
    printf("=== Menu de Peças de Xadrez ===\n");
    printf("1. Rainha\n");
    printf("2. Torre\n");
    printf("3. Bispo\n");
    printf("4. Cavalo\n");
    printf("Escolha uma peça para movimentar (1 a 4): ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            moverRainha(8); // Rainha se move 8 casas
            break;
        case 2:
            moverTorre(5); // Torre se move 5 casas
            break;
        case 3:
            moverBispo(5); // Bispo se move 5 casas
            break;
        case 4:
            moverCavalo(); // Cavalo faz um movimento em L
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

// Rainha: 8 movimentos para a esquerda (recursivo)
void moverRainha(int casas) {
    if(casas == 0) return;
    moverRainha(casas - 1);
    printf("Esquerda\n");
}

// Torre: 5 movimentos para a direita (recursivo)
void moverTorre(int casas) {
    if(casas == 0) return;
    moverTorre(casas - 1);
    printf("Direita\n");
}

// Bispo: 5 movimentos em diagonal (recursivo + loops aninhados)
void moverBispo(int casas) {
    if(casas == 0) return;
    moverBispo(casas - 1);
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 1; j++) {
            printf("Cima direita\n");
        }
    }
}

// Cavalo: 1 movimento em L (2 casas para cima e 1 para direita) com loops 
void moverCavalo() {
    printf("Movimentando cavalo\n");

    for(int i = 0; i < 3; i++) {  // 2 vezes para cima
        if(i >= 2) break;
        printf("Cima\n");
    }

    for(int j = 0; j < 2; j++) {  // 1 vez para direita
        if(j == 0) {
            printf("Direita\n");
            break;
        }
    }

    printf("\n");
}