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

    
    int vetLenght = 0, vetLenght2 = 0;
    int vetorSec[9];
    int rep[9];
    int vetor[9] = {1, 1, 1, 3, 4, 2, 2, 2, 8};
    bool find = false;

    
    printf("\nConteúdo do vetor\n\n");
    for(x = 0; x <= 8; x++){
        printf("%d ", vetor[x]);
    }
    
    printf("\n ________________________ \n");
    printf("|                        |");
    printf("\n|   Find-----x-----rep   |\n");
    printf("|                        |\n"); 
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
            printf("|      Vetor[%d] = %d      |\n", x, vetor[x]); 
        } else {
            vetorSec[vetLenght++] = 0;
            vetLenght2++;
        }
        find = false;
    }
    printf("|                        |");
    printf("\n|________________________|");

    printf("\n ________________________\n");
    printf("|                        |\n");
    printf("|   VetorSec(0 = Null)   |\n|   ");
    for(i = 0; i <= 8; i++){
        printf("%d ", vetorSec[i]);
    }
    printf("   |\n|________________________|");


    printf("\n ________________________\n");
    printf("|                        |\n");
    printf("|     Rep(0 = Null)      |\n|  ");
    for(i = 0; i <= 8; i++){
        printf("%d ", rep[i]);
    }
    printf("  |\n|________________________|");


    printf("\n ________________________\n");
    printf("|                        |\n");
    printf("|     Vetlenght = %d      |\n", vetLenght);
    printf("|     Vetlenght2 = %d     |\n", vetLenght2);
    printf("|________________________|");



    return 0;
}