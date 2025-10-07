// Leia uma matriz 7x3 (semana x horários: manhã, tarde, noite).
// Mostre a maior temperatura da semana e em qual dia ocorreu.
#include <stdio.h>

int main(){
    float temperaturas[7][3];
    float maiorTemp = 0;
    int diaTemp;
    int r, c;

    printf("Preenchimento de temperaturas\n");
    for(r = 0; r <= 6; r++){
        printf("\nDia %d\n", r + 1);
        for(c = 0; c <= 2; c++){
            if(c == 0){
                printf("Manhã: ");
                scanf("%f", &temperaturas[r][c]);
            } else if(c == 1){
                printf("Tarde: ");
                scanf("%f", &temperaturas[r][c]);
            } else {
                printf("Noite: ");
                scanf("%f", &temperaturas[r][c]);
            }
        }
    }

    printf("\nConteúdo da matriz\n");
    printf("     Manhã|Tarde|Noite\n");
    for(r = 0; r <= 6; r++){
        printf("Dia %d: ", r + 1);
        for(c = 0; c <= 2; c++){
            if(temperaturas[r][c] > maiorTemp){
                maiorTemp = temperaturas[r][c];
                diaTemp = r + 1;
            }
            printf("%.1f ", temperaturas[r][c]);
        }
        printf("\n");
    }

    printf("\nA maior temperatura da semana foi %.1f, e ocorreu no dia %d\n", maiorTemp, diaTemp);

    return 0;
}