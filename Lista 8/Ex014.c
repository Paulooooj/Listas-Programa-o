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

    
        int i, vetor[6], n;

        for(i = 0; i < 4; i++){

            printf("Informe o %dº número: ", i + 1);
            scanf("%d", &vetor[i]);
            if(i == 0){
                n = vetor[i];
                vetor[4] = n;
            }if(vetor[i] > n){
                n = vetor[i];
                vetor[4] = n;
            }
            }
    
        for(i = 0; i < 5; i++){
            printf("%d\n", vetor[i]);


        }
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
