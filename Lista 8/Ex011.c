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
    float vetor[50];
     vetor[0] = 100;
    vetor[49] = 100;

    for(i = 1; i < 49; i ++){
        vetor[i] = pow((float)i - 1, 2) + sqrt((float)i + 1);
    }

    for(i = 0; i < 50; i ++){
        printf("%dº %f\n",i, vetor[i]);
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
