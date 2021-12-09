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

    int cont = 0, cont2 = 0, n;
    float divisao, soma = 1;

    printf("Informe o número de repetições: ");
    scanf("%d", &n);

    
    for(cont = 2; cont <= n; cont++){

        divisao = (float)1 / (float)cont;
        
        if(cont % 2 != 0){
        soma = soma + divisao; 
        }if(cont % 2 == 0){
        soma = soma - divisao;
        }
    }

    printf("O valor h é %.2f", soma);
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}