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

    int cont = 0, n, cont2;
    float divisao, soma;

    printf("Informe o número de vezes que vc quer que repita essa programa: ");
    scanf("%d", &n);

    for(cont = 1; cont <= n; cont++){

        cont2 = cont * 2;
        divisao = (float)cont / (float)cont2;
        soma = soma + divisao;
    }
    
    printf("%.2f", soma);
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
