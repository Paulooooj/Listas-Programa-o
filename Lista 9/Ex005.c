#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
    int main() {

    int i, j, soma;
    float matriz[2][2], mcol[5]={0};    

        for(i = 0; i < 2; i++){

        for(j = 0; j < 2; j++){// mudar esses valores da matriz para 5x4
            
            printf("Linha %d, Coluna %d: \n",i , j );
            scanf("%f", &matriz[i][j]);
        }
        }
    
    
    for(i = 0; i < 2; i++){
    
        
        for(j = 0; j < 2; j++){

        mcol[i] = mcol[i] + matriz[i][j];
        }
            
        mcol[i] = mcol[i] /2;
        printf("%.1f\n", mcol[i]);
        }
        
    return 0;
    }



















