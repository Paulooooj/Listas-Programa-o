#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
   int cont = 1, numero, fatorial =1;
   char escolha;
   
   while(escolha != 'n'){
       cont = 1;
       fatorial = 1;
       printf("Informe um número inteiro:\n");
       scanf("%d", &numero);
      
       while(cont <= numero){
          fatorial = cont * fatorial;
            cont ++;
       }
         printf("%d\n", fatorial);
         printf("Outro número (s/n)?");
        scanf(" %c", &escolha); 
        
   }
 


    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
