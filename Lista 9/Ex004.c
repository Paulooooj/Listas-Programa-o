#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
    int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     // Define codificação como sendo UTF-8

    int n = 0, m = 0, i, j, k=0 ;
    
    printf("Informe o numero de linhas: ");
    scanf("%d", &n);
    printf("Informe o numero de colunas: ");
    scanf("%d", &m);
    
    int matriz[n][m];
    int vetor[n];
    
    for(i = 0; i < n; i++){

        for(j = 0; j < m; j++){
            
            printf("Linha %d, Coluna %d: \n",i , j );
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    for(i = 0; i < n; i++){
    
        
        for(j = 0; j < m; j++){

            if(matriz[i][0] == matriz[i][j]){
                vetor[i] = matriz[i][j];
                k = j;
            }else if(matriz[i][j] > vetor[i]){
                vetor[i]= matriz[i][j];
                k = j;
            }
            
        }
        
        printf("/nLinha %d, coluna %d e o maior valor: %d\n",i, k, vetor[i]);
    }
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
