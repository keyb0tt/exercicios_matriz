// Leia uma matriz 3x3 e verifique se há valores repetidos dentro dela.
#include <stdio.h>

int main(){
    int matriz[3][3];
    int vetor[9];
    int r, c, x = 0, y = 0, i = 0;

    printf("\nPreenchimento da matriz\n");
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

    // Transporte de valores matriz -> vetor
    for(r = 0; r <= 2; r++){
        for(c = 0; c <=2; c++){
            vetor[x] = matriz[r][c];
            x++;
        }
    }

    printf("\nConteúdo do vetor\n");
    for(x = 0; x <= 8; x++){
        printf("%d ", vetor[x]);
    }

    int nonRep[9], vetorRep[9], repCount = 0, nonRepCount = 0;

    for(x = 0; x <= 8; x++){
        for(y = 0; y <= 8; y++){
            if(vetor[x] == vetor[y]){
                vetorRep[repCount] = vetor[y];
                repCount++;
            }
        }
    }

    printf("\n\nRep\n");
    for(x = 0; x <= 8; x++){
        printf("%d ", vetorRep[x]);
    }


    printf("\n\nRep: %d\n", repCount);

    // rep -= repFix;

    // printf("\n\nNúmero de repetições: %d\n", rep);

    return 0;
}