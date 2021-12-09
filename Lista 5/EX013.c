#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <time.h>

int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
int numero_sorteado = 0, numero, cont;

printf("Jogo de adivinhar um número! \n\n");
printf("Informe um número para o pc tentar adivinhar:\n");
scanf("%d", &numero);

cont = 1;
    
  srand(time(NULL));  
    
    
    while(numero_sorteado != numero){
           
    numero_sorteado = rand() % 100;
    printf("%d\n ", numero_sorteado);
           
          if(numero_sorteado < numero){
              printf("Errou pc burro! O numero eh maior que %d\n.", numero_sorteado);
            
         }else  if(numero_sorteado > numero){
              printf("Errou! O numero eh menor que %d.\n", numero_sorteado);
    }
       
}
     printf("Parabéns o pc acertou\n");
    printf("Encerrando o programa...");
    
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
