#include <stdio.h>


int main() {
    int tabuleiro[10][10] = {0};
    int navioX[3] = {3, 3, 3};
    int posX = 2, posY = 6; // Para a posição do navio horizontalmente.
    int navioY[3] = {3, 3, 3};
    int posI = 5, posJ = 2; // Para a posição do navio verticalmente.
    int navioDiagonal[3] = {3, 3, 3};

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
