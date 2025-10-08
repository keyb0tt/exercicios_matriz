// Leia uma matriz 3x3 e calcule o produto dos elementos da diagonal secundária.
#include <stdio.h>

int main(){
    int matriz[3][3];
    int r, c, i = 0, x = 2;
    int fill = 1;
    int valorAnterior = 1, produto = 1;

    // Preenchimento da matriz
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            matriz[r][c] = fill++;
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }
    
    
    printf("\nDiagonal secundária da matriz\n");
    for(i = 0; i <= 2; i++){
        printf("%d ", matriz[i][x]);
        valorAnterior = matriz[i][x];
        produto *= valorAnterior;
        x--;
    }

    printf("\n\nProduto da diagonal secundária: %d\n", produto);

    return 0;
}