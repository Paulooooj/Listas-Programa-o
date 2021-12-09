#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
    int main() {
    int i, j;
    float matriz[3][3], vetor[3];
    
        for(i = 0; i < 3; i++){

            for(j = 0; j < 3; j++){
            
                printf("Linha %d, Coluna %d: \n",i , j );
                scanf("%f", &matriz[i][j]);
                
        }
            vetor[i] = matriz[i][i];
        }
        
        for(i = 0; i < 3; i++){

            for(j = 0; j < 3; j++){
            matriz[i][j] = matriz[i][j] / vetor[i];
            printf("%.1f\t", matriz[i][j]);
            
        }

            printf("\n");
        }
    
        return 0;
    }
