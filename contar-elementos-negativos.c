// Leia uma matriz 5x5 e mostre quantos valores negativos ela possui.
#include <stdio.h>

int main(){
    int matriz[5][5];
    int contadorNegativo = 0;
    int r, c;

    printf("Preenchimento da matriz\n");
    for(r = 0; r <= 4; r++){
        for(c = 0; c <= 4; c++){
            scanf("%d", &matriz[r][c]);
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 4; r++){
        for(c = 0; c <= 4; c++){
            printf("%d ", matriz[r][c]);
            if(matriz[r][c] < 0){
                contadorNegativo++;
            }
        }
        printf("\n");
    }

    printf("\nQuantidade de elementos negativos: %d\n", contadorNegativo);

    return 0;
}