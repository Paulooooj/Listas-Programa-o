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

    int cont, n, qtd, n1 = 0, final;

    printf("Informe a quantidade de vezes que quer rodar o programa: ");
    scanf("%d", &qtd);

        for(cont = 1  ; cont <= qtd ; cont++){

            printf("Informe um conjunto N números inteiros: ");
            scanf("%d", &n);

            if(n > n1){
                final = n;
            }else if(n1 > n){
                final = n1;
                n = n1;
            }
            n1 = n;
        }

    printf("O maior valor fornecido foi %d.", final);






    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}