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

            int i, vetor[9], vetor2[9], cont = 0;

    for(i = 0; i < 9; i ++){

        printf("Informe números inteiros: ");
        scanf("%d", &vetor[i]);
    }
    
    
    for(i = 0; i < 9; i ++){
        if(vetor[i] % 2 != 0){
            vetor2[i] = vetor[i];
            printf("%d-%d\n",i, vetor2[i]);
    } 
    }
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
