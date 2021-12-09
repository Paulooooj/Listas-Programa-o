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
    
    int notaA, notaB; 
    float media; 
    char nome[40], escolha;
    bool flag = true, flag2 = true;

    while(flag2){
        printf("Informe o nome do aluno: \n");
        scanf(" %s", nome);
 
 
         while(flag)  {

             printf("Informe o nome A: \n");
             scanf("%d", &notaA);
             
             printf("Informe o nome B: \n");
             scanf("%d", &notaB);
    
    
            if(notaA >= 0 && notaA <= 10 && notaB >= 0 && notaB <= 10){
        
                 media = (notaA * 1 + notaB * 2) / 3;
                 
                 printf("O aluno %s tem uma média: %f\n", nome, media);

                 flag = false;

            }else {
                 printf("ERRO: Nota invalida! Digite novamente a nota.\n");

                 flag = true;
      }
      }  
      
      
        printf("Continuar (s/n) ?\n");
        scanf(" %c", &escolha);
        
        if(escolha == 's') {
          flag2 = true;
        

         }else if(escolha == 'n'){
          flag2= false;
    }
    
}
    
  printf("Encerrando o programa...");  
    
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
