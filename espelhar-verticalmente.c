// Leia uma matriz 3x3 e gere outra onde as linhas estejam invertidas (espelho vertical).
#include <stdio.h>

int main(){
    int matriz[3][3], matrizInv[3][3];
    int r, c, i;
    int fill = 1;

    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            matriz[r][c] = fill++;
        }
    }

    printf("\nConteúdo da matriz original\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d " ,matriz[r][c]);
        }
        printf("\n");
    }

    // Processo de espelhamento
    int first = 0, middle = 1, last = 2;
    for(i = 0; i <= 2; i++){
        matrizInv[first][i] = matriz[last][i];
        matrizInv[last][i] = matriz[first][i];
        matrizInv[middle][i] = matriz[middle][i];
    }

    printf("\nConteúdo da matriz espelhada\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d " ,matrizInv[r][c]);
        }
        printf("\n");
    }

    return 0;
}