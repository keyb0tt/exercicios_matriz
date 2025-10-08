// Leia uma matriz 3x3 e substitua todos os valores pares por seu dobro.
#include <stdio.h>

int main(){
    int matriz[3][3];
    int r, c;
    int fill = 1;

    for(r = 0; r <= 2; r++){
        for(c = 0 ; c <= 2; c++){
            matriz[r][c] = fill++;
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 2; r++){
        for(c = 0 ; c <= 2; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }

    // Substituição dos valores
    for(r = 0; r <= 2; r++){
        for(c = 0 ; c <= 2; c++){
            if(matriz[r][c] % 2 == 0){
                matriz[r][c] *= 2;
            }
        }
    }

    printf("\nMatriz após substituição dos valores\n");
    for(r = 0; r <= 2; r++){
        for(c = 0 ; c <= 2; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}