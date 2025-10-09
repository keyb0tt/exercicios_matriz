// Leia uma matriz 3x3 e verifique se há valores repetidos dentro dela.
#include <stdio.h>
#include <stdbool.h>

int main(){
    int matriz[3][3];
    // int vetor[9];
    int r, c, x = 0, y = 0, i = 0;

    // printf("\nPreenchimento da matriz\n");
    // for(r = 0; r <= 2; r++){
    //     for(c = 0; c <= 2; c++){
    //         scanf("%d", &matriz[r][c]);
    //     }
    // }

    // printf("\nConteúdo da matriz\n");
    // for(r = 0; r <= 2; r++){
    //     for(c = 0; c <= 2; c++){
    //         printf("%d ", matriz[r][c]);
    //     }
    //     printf("\n");
    // }

    // Transporte de valores matriz -> vetor
    // for(r = 0; r <= 2; r++){
    //     for(c = 0; c <=2; c++){
    //         vetor[x] = matriz[r][c];
    //         x++;
    //     }
    // }

    
    int vetorSec[9];
    int vetor[9] = {1, 1, 1, 3, 4, 5, 6, 7, 8};
    
    bool find = false;
    int vetLenght = 0, vetLenght2 = 0;
    int rep[9];
    
    printf("\n\nFind/x\n");
    for(x = 0; x <= 8; x++){
        for(y = 0; y <= 8; y++){
            if(vetor[x] == vetorSec[y]){
                rep[vetLenght2++] = vetor[x];
                find = true;
                break;
            } else {
                rep[vetLenght2] = 0;
            }
        }
        if(find == false){
            vetorSec[vetLenght++] = vetor[x];
            printf("Vetor[x] = %d\n", vetor[x]); 
        } else {
            vetorSec[vetLenght++] = 0;
            vetLenght2++;
        }
        find = false;
    }

    printf("\n\nVetorSec (0 = Null)\n");
    for(i = 0; i <= 8; i++){
        printf("%d ", vetorSec[i]);
    }

    printf("\n\nRep (0 = Null)\n");
    for(i = 0; i <= 8; i++){
        printf("%d ", rep[i]);
    }


    // printf("\nConteúdo do vetor\n");
    // for(x = 0; x <= 8; x++){
    //     printf("%d ", vetor[x]);
    // }

    return 0;
}