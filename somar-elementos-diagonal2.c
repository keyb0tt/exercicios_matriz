// Leia uma matriz 4x4 e calcule a soma dos elementos abaixo da diagonal principal.
#include <stdio.h>

int main(){
    int matriz[4][4];
    int r, c;
    int soma = 0;

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

    for(r = 0; r <= 3; r++){
        for(c = r; c <= 2; c++){
            soma += matriz[r + 1][c];
        }
    }

    printf("\nSoma dos elementos abaixo da diagonal principal: %d", soma);

    return 0;
}