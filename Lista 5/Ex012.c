#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
int numero_sorteado, numero, cont;

printf("Adivinhe o número sorteado:\n");
printf("Informe um número:\n");
scanf("%d", &numero);

cont = 1;
    
  srand(time(NULL));  
    
    
    while(cont == 1){
           
          
           numero_sorteado = rand() % 100;
           
           printf("%d\n ", numero_sorteado);
           while(numero != numero_sorteado) {
          
          if(numero_sorteado > numero){
              printf("Errou! O numero eh maior que %d\n.", numero);
              printf("Informe outro número:\n");
              scanf("%d", &numero);

          }else  if(numero_sorteado < numero){
              printf("Errou! O numero eh menor que %d.\n", numero);
              printf("Informe outro número:\n");
              scanf("%d", &numero);
           }
           cont++;
    }
         printf("Parabéns você acertou\n");
         
         }
    printf("Encerrando o programa...");
    
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
