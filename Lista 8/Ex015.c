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

    int i, proc, vetor[11];


    printf("Informe um valor inteiro: ");
    scanf("%d", &proc);

    for(i = 0; i < 5; i++){

        printf("IInforme %dº valor inteiro: ", i +1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 5; i++){

        if(proc == vetor[i]){

            printf("O elemento %d está no vetor[%d] ", proc, i);
        }

    }
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
