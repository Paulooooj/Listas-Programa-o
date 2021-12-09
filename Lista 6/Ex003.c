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

    int n, cont = 0, soma = 0, i = 0;
    float raiz;

    do{
    printf("Informe um número inteiro e positivo: ");
    scanf("%d", &n);

    while(soma < n){
        if(cont % 2 != 0)  {
        soma = cont + soma;
         // nessa soma ele vai pegando todos os números impares, até chegar a soma ser igual a n e ai parar o while
        i ++;
        }

        cont ++;
        }


        raiz = sqrt(n);

        if(raiz == i) {
        printf("Este número é quadrado perfeito, tem raiz %.0f\n.", raiz);

        }else {
        printf("Este número não é um quadrado perfeito.");
        }

        i = 0; 
        cont = 0;
        soma = 0;

    }while(n != -1);



 // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
