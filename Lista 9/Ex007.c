#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
    int main() {
    
    int i, j, matriz[3][3], vetors[3], k =2, soma = 0;// alterar a matriz para um 4x4
    
        for(i = 0; i < 3; i++){

            for(j = 0; j < 3; j++){
            
                printf("Linha %d, Coluna %d: \n",i , j );
                scanf("%d", &matriz[i][j]);
        }
            vetors[i] = matriz[i][k];
            k--;
        }
    
        for(i = 0; i < 3; i++){

            for(j = 0; j < 3; j++){
            
            printf("%d\t", matriz[i][j]);
                }
            printf("\n");
        }
    
        printf("\nDiagonal Secundaria:\n");
        for(i = 0; i < 3; i++){

            printf("%d\t", vetors[i]);
            soma = soma + vetors[i]; 
        
        }
            printf("\nO resultado da soma da diagonal secundaria foi %d\n", soma);
    
    return 0;
    }
