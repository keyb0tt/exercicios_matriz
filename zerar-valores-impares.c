// Leia uma matriz 4x4 e substitua todos os números ímpares por 0.
#include <stdio.h>

int main(){
    int matriz[4][4];
    int r, c;

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
        for(c = 0; c <= 3; c++){
            if(matriz[r][c] % 2 != 0){
                matriz[r][c] = 0;
            }
        }
    }

    printf("\nConteúdo da matriz após as alterações\n");
    for(r = 0; r <= 3; r++){
        for(c = 0; c <= 3; c++){
            printf("%d ", matriz[r][c]);
        }
        printf("\n");
    }

    return 0;
}