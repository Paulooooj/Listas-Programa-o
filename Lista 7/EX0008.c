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

    int cont = 0, pesomenor, pesomaior, n, peso, n1, n2;

    for(cont = 1; cont <=90; cont++) {
        printf("Qual o número do boi: ");
        scanf("%d", &n);
        printf("Informe o peso: ");
        scanf("%d", &peso);
        
        
        if(cont == 1){
            pesomaior = peso;
            pesomenor = peso;
            n1 = n;
            n2 = n;
        }else if(peso > pesomaior){
            pesomaior = peso;
            n1 = n;
        }else if(peso < pesomenor){
            pesomenor = peso;
            n2 = n;
        }
    }
    
    printf("O maior peso é %d seu número é %d, e o menor peso é %d e o seu número é %d.", pesomaior,n1, pesomenor, n2);










    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}