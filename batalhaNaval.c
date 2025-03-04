#include <stdio.h>


int main() {
    int tabuleiro[10][10] = {0};
    int navioX[3] = {3, 3, 3};
    int posX = 2, posY = 6; // Para a posição do navio horizontalmente.
    int navioY[3] = {3, 3, 3};
    int posI = 5, posJ = 2; // Para a posição do navio verticalmente.
    int navioDiagonal[3] = {3, 3, 3};
    // Variáveis para as habilidades
    int cone[3][5];
    int cruz[3][5];
    int octa[3][5];

    printf("Tabuleiro completo com os navios:\n");
    // Loop para a colocação do navioX
    for(int i = 0; i < 3; i++) {
        tabuleiro[posX][posY + i] = navioX[i];
    }
    // Loop para a colocação do navioY
    for(int i = 0; i < 3; i++) {
        tabuleiro[posI + i][posJ] = navioY[i];
    }
    // Loops para o navio ser colocado na diagonal
    for(int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
        tabuleiro[i][j] = navioDiagonal[i];
        tabuleiro[6 + i][8 - j] = navioDiagonal[i];
    }
    // Loop para a habilidade de cone
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 2 || j == 3)) || i == 2) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // Loop para a habilidade de cruz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1) || (i == 2 && j == 2)) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }
    // Loop para a habilidade de octa
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 2 || j ==3)) || (i == 2 && j == 2)) {
                octa[i][j] = 1;
            } else {
                octa[i][j] = 0;
            }
        }
    }
    // Posicionando as habilidades
    for(int i = )
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
