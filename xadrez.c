#include <stdio.h>
int torre = 0, rainha = 0, bispo = 0, pecas; // Variáveis para guardar dados

int main() { 
    // Menu de peças 
    printf("---Peças Xadrez---\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Escolha uma peça para movimentar: ");
    scanf("%d", &pecas);

    switch(pecas) {
    case 1: // Movimento da Torre - 5 casas para direita (WHILE)
        printf("Movimento da torre:\n");
        while(torre < 5) {   
            printf("Direita\n");
            torre++;
        }
        break;

    case 2: // Movimento do Bispo - 5 casas na diagonal superior direita (DO-WHILE)
        printf("Movimento do bispo:\n");
        do {                                       
            printf("Cima direita\n");
            bispo++;
        } while(bispo < 5);
        break;
        
    case 3: // Movimento da Rainha - 8 casas para a esquerda (FOR)
        printf("Movimento da rainha:\n");
        for(rainha = 0; rainha < 8; rainha++) {     
            printf("Esquerda\n");
        }
        break;

    default:
        printf("Peça inválida.\n");
        break;
    }

    return 0;
}