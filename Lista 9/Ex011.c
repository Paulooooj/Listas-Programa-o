#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
    int main() {
    
    int i, j, matriz[4][3], vetortotal[4] = {0}, vetorpreco[4] = {0}, vetordeposito[3] = {0}, comparacao = 0, k = 0;
    
    for(i = 0; i < 4; i++){
            printf("\nInforme o valor do produto %d: ", i + 1);
            scanf("%d", &vetorpreco[i]);
            printf("Informe a quantidade\n");
        for(j = 0; j < 3; j++){
            printf("Produto1 %d, Deposito %d: \n",i + 1 , j + 1 );
            scanf("%d", &matriz[i][j]);
            vetortotal[i] = vetortotal[i] + matriz[i][j];
            vetordeposito[j] = matriz[i][j] + vetordeposito[j];
        }
        vetorpreco[i] = vetorpreco[i] * vetortotal[i];
        
    }
    system("cls");
    printf("-----------------------Estoque------------------------\n");
    printf("\t\tD1\tD2\tD3\tTotal\t Valor\n");

    for(i = 0; i < 4; i++){
        printf("Produto%d\t", i+1);
        for(j = 0; j < 3; j++){
            printf("%d\t",matriz[i][j]);
    }
        printf(" %d\t", vetortotal[i]);
        printf(" R$%d", vetorpreco[i]);
    printf("\n"); 
    }
    
    for(i = 0; i < 3; i++){

        if(vetordeposito[i] == vetordeposito[0]){
            comparacao = vetordeposito[i];
            k = i;
        }else if(comparacao > vetordeposito[i] ){
            comparacao = vetordeposito[i];
            k = i;
        }
        }
    printf("O estoque com menor quantidade %d, com o total de %d produtos.", k + 1, comparacao); 
    return 0;
    }
