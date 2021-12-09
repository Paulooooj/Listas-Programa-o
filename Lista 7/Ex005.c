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

  int num, cont, cont2;
  float divisao, pi;

  printf("Digite um número:");
  scanf("%d", &num);
  
    for (cont = 1; cont <= num; cont = cont + 2){
      divisao = 4.0 / (float)cont;

      if(cont2 % 2 == 0 ){
        pi = pi + divisao;
  
      }else if(cont2 % 2 != 0){
        pi = pi - divisao;
      }
      cont2++;
  }
  printf("O valor de pi é %f", pi);
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}