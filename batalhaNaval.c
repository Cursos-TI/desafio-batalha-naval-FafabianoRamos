#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - implementação
    // Tabuleiro 5x5 (X: colunas 0..4, Y: linhas 0..4)
    const int ROWS = 5;
    const int COLS = 5;
    int board[ROWS][COLS];
    for (int y = 0; y < ROWS; y++) {
        for (int x = 0; x < COLS; x++) {
            board[y][x] = 0; // 0 = vazio
        }
    }

    // Definição dos navios (entradas definidas por variáveis no código)
    // Navio vertical (ex.: tamanho 3)
    const int vert_len = 3;
    const int vert_start_x = 1; // coluna X
    const int vert_start_y = 0; // linha Y
    int navioV[vert_len][2]; // cada elemento: {x, y}

    // Navio horizontal (ex.: tamanho 4)
    const int hor_len = 4;
    const int hor_start_x = 0; // coluna X
    const int hor_start_y = 3; // linha Y
    int navioH[hor_len][2]; // cada elemento: {x, y}

    // Posicionar navio vertical no tabuleiro (verificando limites)
    for (int i = 0; i < vert_len; i++) {
        int x = vert_start_x;
        int y = vert_start_y + i;
        if (x >= 0 && x < COLS && y >= 0 && y < ROWS) {
            navioV[i][0] = x;
            navioV[i][1] = y;
            board[y][x] = 1; // marca parte do navio vertical com 1
        } else {
            // posição inválida; marca com -1 para indicar erro
            navioV[i][0] = -1;
            navioV[i][1] = -1;
        }
    }

    // Posicionar navio horizontal no tabuleiro (verificando limites)
    for (int i = 0; i < hor_len; i++) {
        int x = hor_start_x + i;
        int y = hor_start_y;
        if (x >= 0 && x < COLS && y >= 0 && y < ROWS) {
            navioH[i][0] = x;
            navioH[i][1] = y;
            // se já houver outro navio, marca como 3 (colisão) para visualização
            if (board[y][x] != 0) board[y][x] = 3; else board[y][x] = 2; // 2 = navio horizontal
        } else {
            navioH[i][0] = -1;
            navioH[i][1] = -1;
        }
    }

    // Exibir coordenadas do navio vertical
    printf("Navio Vertical (tamanho %d):\n", vert_len);
    for (int i = 0; i < vert_len; i++) {
        if (navioV[i][0] >= 0)
            printf("  Parte %d -> (X=%d, Y=%d)\n", i + 1, navioV[i][0], navioV[i][1]);
        else
            printf("  Parte %d -> posição inválida\n", i + 1);
    }

    // Exibir coordenadas do navio horizontal
    printf("\nNavio Horizontal (tamanho %d):\n", hor_len);
    for (int i = 0; i < hor_len; i++) {
        if (navioH[i][0] >= 0)
            printf("  Parte %d -> (X=%d, Y=%d)\n", i + 1, navioH[i][0], navioH[i][1]);
        else
            printf("  Parte %d -> posição inválida\n", i + 1);
    }

    // Exibir tabuleiro (linhas = Y, colunas = X)
    printf("\nTabuleiro (0=vazio,1=vert,2=hor,3=colisao):\n");
    for (int y = 0; y < ROWS; y++) {
        for (int x = 0; x < COLS; x++) {
            printf("%d ", board[y][x]);
        }
        printf("\n");
    }

    return 0;
}
