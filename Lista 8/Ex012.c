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

    int i, vetor[11], vetor2[11], vetor3[11];

    for(i = 0; i < 10; i ++){
        printf("Informe valores inteiros %dº número: ", i + 1);
        scanf("%d", &vetor[i]);

    }
    for(i = 0; i < 10; i ++){
        printf("Informe valores inteiros %dº número: ", i + 11);
        scanf("%d", &vetor2[i]);
}
    for(i = 0; i < 10; i ++){

        vetor3[i] = vetor[i] + vetor2[i];

    }
    for(i = 0; i < 10; i ++){

        printf("Soma dos valores informados %d\n", vetor3[i]);

    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}