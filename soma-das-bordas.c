// Leia uma matriz 5x5 e calcule a soma apenas dos elementos que estão nas bordas 
// (primeira e última linha, primeira e última coluna).
#include <stdio.h>

int main(){
    int r = 0, c = 0, rSize, cSize; 
    int i = 0, fill = 1, a = 0;
    int matriz[rSize][cSize];
    int somaBordas = 0;

    printf("\nQuantidade de linhas: ");
    scanf("%d", &rSize);
    printf("\nQuantidade de Colunas: ");
    scanf("%d", &cSize);

    rSize -= 1;
    cSize -= 1;
    
    // Preenchimento da matriz
    for(r = 0; r <= rSize; r++){
        for(c = 0; c <= cSize; c++){
            matriz[r][c] = fill++;
        }
    }

    printf("\nConteúdo da matriz\n");
    for(r = 0; r <= rSize; r++){
        for(c = 0; c <= cSize; c++){
            printf(" %d ", matriz[r][c]);
        }
        printf("\n");
    }

    // Abrange 1ª linha e 1ª coluna
    for(i = 0; i <= rSize; i++){
        somaBordas += matriz[i][0] + matriz[0][i];
    }
    // Abrange os elementos restantes
    for(a = 1; a <= rSize; a++){
        somaBordas += matriz[rSize][a] + matriz[a][cSize];
    }
    // Subtrai elementos repetidos (primeiro e último elemento da matriz)
    somaBordas -= matriz[0][0] + matriz[rSize][cSize];

    printf("\nSoma das bordas da matriz: %d", somaBordas);

    return 0;
}