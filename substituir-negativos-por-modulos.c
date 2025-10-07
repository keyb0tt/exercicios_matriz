// Leia uma matriz 3x3 e substitua todos os números negativos por seus valores absolutos.
#include <stdio.h>

int main(){
    int matriz[3][3];
    int r, c;

    printf("Preenchimento da matriz\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            scanf("%d", &matriz[r][c]);
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }

    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            if(matriz[r][c] < 0){
                matriz[r][c] *= -1;
            }
        }
    }

    printf("\nConteúdo da matriz após alterações\n");
    for(r = 0; r <= 2; r++){
        for(c = 0; c <= 2; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }

    return 0;
}