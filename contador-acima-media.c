// Leia uma matriz 4x4 calcule a média de todos os valores e conte quantos estão acima dessa média.
#include <stdio.h>

int main(){
    int rSize, cSize;
    int r, c, fill = 1, elementCount = 0, aboveAverage = 0;
    float media, valueSum = 0;
    
    printf("Quantidade de linhas: ");
    scanf("%d", &rSize);
    printf("Quantidade de colunas: ");
    scanf("%d", &cSize);
    int matriz[rSize][cSize];
    rSize -= 1, cSize -= 1, fill = 1;

    // Preenchimento da matriz
    for(r = 0; r <= rSize; r++){
        for(c = 0; c <= cSize; c++){
            matriz[r][c] = fill++;
            elementCount++;
            valueSum += matriz[r][c];
        }
    }
    // Cálculo da média de valores
    media = valueSum / elementCount;

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= rSize; r++){
        for(c = 0; c <= cSize; c++){
            printf(" %d", matriz[r][c]);
            if(matriz[r][c] > media){
                aboveAverage++;
            }
        }
        printf("\n");
    }

    printf("\nA média da matriz é de %.1f, %d elementos estão acima dessa média", media, aboveAverage);

    return 0;
}