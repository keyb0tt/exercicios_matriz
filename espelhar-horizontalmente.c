// Leia uma matriz 3x3 e gere outra onde as colunas estejam invertidas
// (como se fosse um espelho horizontal).
#include <stdio.h>

int main(){
    int matriz[3][3], matrizEsp[3][3];
    int r, c, i;
    int fill = 1;

    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            matriz[r][c] = fill++;
            matrizEsp[r][c] = fill;
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }

    // Processo de espelhamento
    for(i = 0; i <= 2; i++){
        matrizEsp[i][1] = matriz[i][1];
        matrizEsp[i][2] = matriz[i][0];
        matrizEsp[i][0] = matriz[i][2];
    }

    printf("\nConteúdo da matriz espelhada\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d ", matrizEsp[r][c]);
        }
        printf("\n");
    }


    return 0;
}