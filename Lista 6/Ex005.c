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

  int n1, n2, cont = 0;
  printf("Infome o primeiro número: ");
  scanf("%d", &n1);
  printf("Infome o segundo número: ");
  scanf("%d", &n2);
    
    do {

      if(n2 != n1){
      printf("Infome o segundo número novamente: ");
      scanf("%d", &n2);  

      }

      cont ++;

    }while(n1 != n2);


  printf("Quandide de tentativas para digitar os dois números iguais foi %d vezes \n", cont);
  printf("Encerrando o programa...");


  // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
