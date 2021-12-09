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

    int cont, cont2 = 1;
    float divisao, resultado;

    for(cont = 500; cont > 0; cont = cont-50){
    
        if(cont2 % 2 != 0){

        divisao = 2.0 / (float)cont;
        resultado = resultado + divisao;

        }
        if(cont2 % 2 == 0){
    
        divisao = 5.0 / (float)cont;
        resultado = resultado - divisao; 
        }
        cont2 ++;
        }

    printf("%f\n", resultado); 
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}