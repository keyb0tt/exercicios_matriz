// Leia uma matriz 4x4 e calcule a soma dos elementos acima da diagonal principal.
#include <stdio.h>

int main(){
    int matriz[4][4];
    int r, c, rowSize = 4, columnSize = 4;

    printf("Preenchimento da matriz\n");
    for(r = 0; r <= 3; r++){
        for(c = 0; c <= 3; c++){
            scanf("%d", &matriz[r][c]);
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 3; r++){
        for(c = 0; c <= 3; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }
    
    int soma = 0;

    //01 02 03 12 13 23 33
    for(r = 0; r <= 3; r++){
        for(c = r; c <= 2; c++){
            soma += matriz[r][c + 1];
        }
    }

    printf("\nSoma dos elementos acima da diagonal: %d", soma);

    return 0;
}