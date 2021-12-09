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

    int i;
    float vetor[10];

    for(i = 0; i < 10; i ++){
        vetor[0] = 1;
        vetor[i] = i;
    }

    for(i = 0; i < 10; i ++){

        if((int)vetor[i] % 2 == 0){

        //printf("%f\n", vetor[i]);
        vetor[i] = vetor[i] *  (3.0/5.0);
        
        }
        if((int)vetor[i] % 2 != 0){

        //printf("%f\n", vetor[i]);
        vetor[i] = vetor[i] * vetor[i];
        
        }
        }

    for(i = 0; i < 10; i ++){

        printf("%.1f\n", vetor[i]);

    }



    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;

    }










