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


  int n = 0, x = 0, cont = 0;
  float media;

  do{
    printf("Informe um número: \n");
    scanf("%d", &n);

    if(n != -1){

    x = x + n;
    cont ++;

    }


  }while(n != -1);

  media = x / cont;

  printf("Média dos números fornecidos: %.2f", media);

  // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
