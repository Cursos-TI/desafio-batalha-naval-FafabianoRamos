#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Aventureiro - implementação
    // Tabuleiro 10x10 (X: colunas 0..9, Y: linhas 0..9)
    const int ROWS = 10;
    const int COLS = 10;
    int board[ROWS][COLS];
    for (int y = 0; y < ROWS; y++) {
        for (int x = 0; x < COLS; x++) {
            board[y][x] = 0; // 0 = vazio
        }
    }

    // Vamos definir 4 navios (valores definidos no código):
    // 1) Navio vertical (tamanho 4)
    const int v1_len = 4;
    const int v1_x = 2;
    const int v1_y = 1;
    int nav_v1[v1_len][2];

    // 2) Navio horizontal (tamanho 3)
    const int h1_len = 3;
    const int h1_x = 5;
    const int h1_y = 2;
    int nav_h1[h1_len][2];

    // 3) Navio diagonal (descendo para a direita) (tamanho 3)
    const int d1_len = 3;
    const int d1_x = 3;
    const int d1_y = 3;
    int nav_d1[d1_len][2];

    // 4) Navio diagonal (descendo para a direita) (tamanho 4)
    const int d2_len = 4;
    const int d2_x = 6;
    const int d2_y = 0;
    int nav_d2[d2_len][2];

    // Função inline para marcar (verificando limites) - feita manualmente aqui
    // Posicionar navio vertical v1
    for (int i = 0; i < v1_len; i++) {
        int x = v1_x;
        int y = v1_y + i;
        if (x >= 0 && x < COLS && y >= 0 && y < ROWS) {
            nav_v1[i][0] = x; nav_v1[i][1] = y;
            board[y][x] = 3; // 3 = ocupado (Aventureiro requer mostrar 3 para ocupado)
        } else {
            nav_v1[i][0] = -1; nav_v1[i][1] = -1;
        }
    }

    // Posicionar navio horizontal h1
    for (int i = 0; i < h1_len; i++) {
        int x = h1_x + i;
        int y = h1_y;
        if (x >= 0 && x < COLS && y >= 0 && y < ROWS) {
            nav_h1[i][0] = x; nav_h1[i][1] = y;
            board[y][x] = 3;
        } else {
            nav_h1[i][0] = -1; nav_h1[i][1] = -1;
        }
    }

    // Posicionar navio diagonal d1 (down-right)
    for (int i = 0; i < d1_len; i++) {
        int x = d1_x + i;
        int y = d1_y + i;
        if (x >= 0 && x < COLS && y >= 0 && y < ROWS) {
            nav_d1[i][0] = x; nav_d1[i][1] = y;
            board[y][x] = 3;
        } else {
            nav_d1[i][0] = -1; nav_d1[i][1] = -1;
        }
    }

    // Posicionar navio diagonal d2 (down-right)
    for (int i = 0; i < d2_len; i++) {
        int x = d2_x + i;
        int y = d2_y + i;
        if (x >= 0 && x < COLS && y >= 0 && y < ROWS) {
            nav_d2[i][0] = x; nav_d2[i][1] = y;
            board[y][x] = 3;
        } else {
            nav_d2[i][0] = -1; nav_d2[i][1] = -1;
        }
    }

    // Exibir coordenadas de cada navio
    printf("Nível Aventureiro - Coordenadas dos Navios\n");

    printf("\nNavio Vertical 1 (tamanho %d):\n", v1_len);
    for (int i = 0; i < v1_len; i++) {
        if (nav_v1[i][0] >= 0) printf("  Parte %d -> (X=%d, Y=%d)\n", i+1, nav_v1[i][0], nav_v1[i][1]);
        else printf("  Parte %d -> posição inválida\n", i+1);
    }

    printf("\nNavio Horizontal 1 (tamanho %d):\n", h1_len);
    for (int i = 0; i < h1_len; i++) {
        if (nav_h1[i][0] >= 0) printf("  Parte %d -> (X=%d, Y=%d)\n", i+1, nav_h1[i][0], nav_h1[i][1]);
        else printf("  Parte %d -> posição inválida\n", i+1);
    }

    printf("\nNavio Diagonal 1 (tamanho %d):\n", d1_len);
    for (int i = 0; i < d1_len; i++) {
        if (nav_d1[i][0] >= 0) printf("  Parte %d -> (X=%d, Y=%d)\n", i+1, nav_d1[i][0], nav_d1[i][1]);
        else printf("  Parte %d -> posição inválida\n", i+1);
    }

    printf("\nNavio Diagonal 2 (tamanho %d):\n", d2_len);
    for (int i = 0; i < d2_len; i++) {
        if (nav_d2[i][0] >= 0) printf("  Parte %d -> (X=%d, Y=%d)\n", i+1, nav_d2[i][0], nav_d2[i][1]);
        else printf("  Parte %d -> posição inválida\n", i+1);
    }

    // Exibir tabuleiro completo (0 = vazio, 3 = ocupado)
    printf("\nTabuleiro 10x10 (0=vazio,3=ocupado):\n");
    for (int y = 0; y < ROWS; y++) {
        for (int x = 0; x < COLS; x++) {
            printf("%d ", board[y][x]);
        }
        printf("\n");
    }

    // ---------------------------
    // Nível Mestre - Habilidades Especiais
    // Vamos demonstrar três padrões (cone, octaedro, cruz) aplicados em um tabuleiro
    // e exibir as áreas afetadas: 0 = não atingido, 1 = atingido.
    const int M_ROWS = 10;
    const int M_COLS = 10;
    int mboard[M_ROWS][M_COLS];
    for (int y = 0; y < M_ROWS; y++) for (int x = 0; x < M_COLS; x++) mboard[y][x] = 0;

    // Padrões (usamos matrizes pequenas). 1 = área afetada
    int cone[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };
    int octaedro[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };
    int cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    // Função de aplicação dos padrões (top-left anchor)
    void (*applyPattern)(int p[3][5], int ph, int pw, int offx, int offy);
    // Em C não podemos facilmente criar closures aqui; vamos usar um loop direto abaixo.

    // Aplicar cone em (1,1)
    int offx = 1, offy = 1;
    for (int py = 0; py < 3; py++) for (int px = 0; px < 5; px++) {
        if (cone[py][px]) {
            int bx = offx + px;
            int by = offy + py;
            if (bx >= 0 && bx < M_COLS && by >= 0 && by < M_ROWS) mboard[by][bx] = 1;
        }
    }

    // Aplicar octaedro em (4,2)
    offx = 4; offy = 2;
    for (int py = 0; py < 3; py++) for (int px = 0; px < 5; px++) {
        if (octaedro[py][px]) {
            int bx = offx + px;
            int by = offy + py;
            if (bx >= 0 && bx < M_COLS && by >= 0 && by < M_ROWS) mboard[by][bx] = 1;
        }
    }

    // Aplicar cruz em (6,4)
    offx = 6; offy = 4;
    for (int py = 0; py < 3; py++) for (int px = 0; px < 5; px++) {
        if (cruz[py][px]) {
            int bx = offx + px;
            int by = offy + py;
            if (bx >= 0 && bx < M_COLS && by >= 0 && by < M_ROWS) mboard[by][bx] = 1;
        }
    }

    // Exibir padrões (para referência) e o tabuleiro mestre
    printf("\nNível Mestre - Padrões e Tabuleiro de Habilidades\n");

    printf("\nPadrão: Cone (3x5)\n");
    for (int py = 0; py < 3; py++) {
        for (int px = 0; px < 5; px++) printf("%d ", cone[py][px]);
        printf("\n");
    }

    printf("\nPadrão: Octaedro (3x5)\n");
    for (int py = 0; py < 3; py++) {
        for (int px = 0; px < 5; px++) printf("%d ", octaedro[py][px]);
        printf("\n");
    }

    printf("\nPadrão: Cruz (3x5)\n");
    for (int py = 0; py < 3; py++) {
        for (int px = 0; px < 5; px++) printf("%d ", cruz[py][px]);
        printf("\n");
    }

    printf("\nTabuleiro de Habilidades (0=não atingido,1=atingido):\n");
    for (int y = 0; y < M_ROWS; y++) {
        for (int x = 0; x < M_COLS; x++) printf("%d ", mboard[y][x]);
        printf("\n");
    }

    return 0;
}
