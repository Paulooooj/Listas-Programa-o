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

    int i, j;
    float matriz[5][6], x, matrizc[1][6];

    printf("Informe números reais\n");
    for(i = 0; i < 5; i++){

        for(j = 0; j < 6; j++){

        printf("%dºlinha, %dºcoluna: \n",i + 1, j + 1);
        scanf("%f", &matriz[i][j]);
        }
    }
    printf("Informe um valor inteiro: \n");
    scanf("%f", &x);
    
    for(i = 0; i < 6; i++){

        matrizc[1][i] = matriz[3][i] * x;
    }
    printf("\n");
    for(i = 0; i < 5; i++){

        for(j = 0; j < 6; j++){

        printf("%.0f\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 6; i++){

    printf("%.0f\t", matrizc[1][i]);
    
    }
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
