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
    int i, j, k = 0;
    int matriz[3][3], vetor[9];

    printf("Informe nove números inteiros\n");

    for(i = 0; i < 9; i++){

        printf("%dº número: \n", i + 1);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 3; i++){
    
        for(j = 0; j < 3; j++){

        matriz[i][j] = vetor[k];
        k++;
    }
    }
    for(i = 0; i < 9; i++){

        printf("%d ", vetor[i]);
    }    
    printf("\n\n");
    for(i = 0; i < 3; i++){
    
        for(j = 0; j < 3; j++){

        printf("%d\t", matriz[i][j]);
    }

    printf("\n");

    }
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
