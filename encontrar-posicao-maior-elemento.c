// Leia uma matriz 4x4 e mostre o maior elemento e suas coordenadas (linha e coluna).
#include <stdio.h>

int main(){
    int matriz[4][4];
    int r, c;
    int maiorN = 0, coordL = 0, coordC = 0;
    int fill = 1;

    // Preenchimento da matriz
    for(r = 0; r <= 3; r++){
        for(c = 0; c <= 3; c++){
            matriz[r][c] = fill++;
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= 3; r++){
        for(c = 0; c <= 3; c++){
            printf("%d ", matriz[r][c]);
            if(matriz[r][c] > maiorN){
                maiorN = matriz[r][c];
                coordL = r;
                coordC = c;
            }
        }
        printf("\n");
    }

    printf("\nMaior elemento: %d\n", maiorN);
    printf("\nLocalização do elemento \nLinha -> %d\nColuna -> %d", coordL + 1, coordC + 1);

    return 0;
}