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

    int i, vetor[5] , vetor2[5] , vetor3[5] = {0}, cont = 0;

    for(i = 0; i < 5; i++ ){

        printf("Informe um valor para a primeira sequência: ");
        scanf("%d", &vetor[i]);
        printf("Informe um valor para a segunda sequência: ");
        scanf("%d", &vetor2[i]);
        if(vetor[i] == vetor2[i]){
        vetor3[cont] = vetor[i];
        cont ++;
        }
    }
    
    for(i = 0; i < cont; i++ ){

        printf("%d\n", vetor3[i]);
    }
    
    
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }