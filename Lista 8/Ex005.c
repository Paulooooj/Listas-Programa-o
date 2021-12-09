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

    int i, vet1[20], vet2[20], cont = 0;
    
    for(i = 0; i < 20; i ++){

        printf("Informe o primeira número: ");
        scanf("%d", &vet1[i]);
        printf("Informe o segunda número: ");
        scanf("%d", &vet2[i]);
    }
    for(i = 0; i < 20; i ++){

        if(vet1[0] == vet2[i]){
        cont++;
        }
    }
    printf("%d", cont);
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
