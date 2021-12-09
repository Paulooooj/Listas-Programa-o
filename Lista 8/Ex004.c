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
    char vet1[10], vet2[10];
    
    for(i = 0; i < 10; i ++){

        printf("Informe a primeira letra: ");
        scanf(" %c", &vet1[i]);
        printf("Informe a segunda letra: ");
        scanf(" %c", &vet2[i]);
    }
    for(i = 0; i < 10; i ++){

        if(vet1[i] == vet2[i]){

        printf("%d-%c\n",i, vet1[i]);
        
        
        }
    }
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
