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

    int i, vet1[20], vet2[20], cont = 0, k;
    
    for(i = 0; i < 5; i ++){

        printf("Informe o primeira número: ");
        scanf("%d", &vet1[i]);
        
    }
        for(i = 0; i < 5; i ++){

        printf("Informe o segunda número: ");
        scanf("%d", &vet2[i]);
    }
    
    for(i = 0; i < 5; i ++){
            cont = 0;
        for(k = 0; k < 5; k++){
            
            if(vet1[i] == vet2[k]){
                cont ++;
                
            }
        }
        printf("Apareceu %d no total de %d vezes no segundo vetor\n", vet1[i], cont);
    } 
    

    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }