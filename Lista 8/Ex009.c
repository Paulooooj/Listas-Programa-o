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

    
    int i, notas[10], soma = 0;


    for(i= 0; i < 5; i++ ){

        printf("Informe o %dº valor.\n", i + 1);
        scanf("%d", &notas[i]);
        
        if(notas[i] % 2 != 0){
            soma = soma + notas[i];
        }
    
    }
    printf("A soma dos números impares escrito foi %d", soma);
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
