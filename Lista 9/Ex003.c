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
    SetConsoleOutputCP(CPAGE_UTF8);

    int i, j, x, k,m;
    int matriz[2][2];

    for(i = 0; i < 2; i++){

        for(j = 0; j < 2; j++){

        printf("%dºlinha, %dºcoluna: \n",i , j );
        scanf("%d", &matriz[i][j]);

            if(matriz[0][0] == matriz[i][j]){
                x = matriz[i][j];
                k = i;
                m = j;
            }else if(matriz[i][j] > x){
                x = matriz[i][j];
                k = i;
                m = j;
            }
        }
    }
    
    printf("O maior valor está linha %d Coluna %d , é %d",k, m, x);
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
