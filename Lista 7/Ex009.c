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

    int n, cont, cont2 = 1;

    printf("Informe o número qual desesje calcular o fatorial: ");
    scanf("%d", &n);

    for(cont= n; cont > 0; cont -- ){

        cont2 = cont * cont2;

    }

    if(n == 0){

        cont2 = 0;
    }

    printf("O fatorial de %d é %d.",n, cont2);



    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}