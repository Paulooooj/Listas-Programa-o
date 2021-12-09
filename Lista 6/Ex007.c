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

    int x, y, z, cont = 1, resultado = 1;
    char escolha;

    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    printf("Informe o segundo valor: ");
    scanf("%d", &y);

    do{
        z = x;

        resultado = resultado * z;

        cont ++;

    }while(cont <= y);



        printf("O resultado de %d elevado a %d é %d\n",x, y, resultado);
        printf("Encerrando o programa...");


    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
