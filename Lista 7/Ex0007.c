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

    int cont, n, n2, maior; 

    printf("Informe a quantidade de vezes que deseja rodar esse programa: ");
    scanf("%d", &n);

    for(cont = 1; cont <= n; cont++){

        printf("Informe um número inteiro: ");
        scanf("%d", &n2);

        if(cont == 1){
            maior = n2;

        }else if(n2 > maior){
            maior = n2;

        }
    }


    printf("O maior número foi %d.", maior);


    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}