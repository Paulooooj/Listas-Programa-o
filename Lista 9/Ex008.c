#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
    int main() {
    int i, j, matriz[3][4], matrizt[4][3], k = 0, c = 0;
    
        for(i = 0; i < 3; i++){

            for(j = 0; j < 4; j++){
            
                printf("Linha %d, Coluna %d: \n",i , j );
                scanf("%d", &matriz[i][j]);
            }
        }
        
        printf("\nMatriz original:\n");
        for(i = 0; i < 3; i++){
            for(j = 0; j < 4; j++){
            
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }
        
        printf("\nMatriz transpostal:\n");
        for(i = 0; i < 4; i++){
            k = 0;
            for(j = 0; j < 3; j++){
            
                matrizt[i][j] = matriz[k][c];
                printf("%d\t", matrizt[i][j]);
            k++;
            
            }
            printf("\n");
            c++;
        }

        return 0;
    }
