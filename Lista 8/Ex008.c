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

    
    int i, nota[5], soma = 0, cont = 0;
    float media = 0;

    for(i = 0; i < 5; i ++){

        printf("Informe a nota %dº aluno: \n", i +1);
        scanf("%d", &nota[i]);
        soma = soma + nota[i];
        cont ++;
    }

    media = (float)soma / (float)cont;
    
    
    printf("A média aritmética geral desta classe foi %.1f.\n", media);
    
    for(i = 0; i < 5; i ++){
        if(nota[i] < media){
            printf("A %dº nota que é %d ficou abaixo da média geral.\n", i + 1, nota[i]);

        }

    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
