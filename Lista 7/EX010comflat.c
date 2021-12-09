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
    char nome[40], escolha[3];
    bool flag = true, flag2 = true, flag3 = true;

    while(flag2){

        printf("Informe o nome do aluno: \n");
        scanf(" %s", nome);
      
         
         while(flag)  {

             printf("Informe o nota A: \n");
             scanf("%d", &notaA);
             
             printf("Informe o nota B: \n");
             scanf("%d", &notaB);
    
    
            if(notaA >= 0 && notaA <= 10 && notaB >= 0 && notaB <= 10){
        
                 media = (notaA * 1 + notaB * 2) / 3;
                 
                 printf("O aluno %s tem uma média: %.2f\n", nome, media);

                 flag = false;

            }else {
                 printf("ERRO: Nota invalida! Digite novamente a nota.\n");

                 flag = true;
      }
                   
      }  
      flag3 = true;
    while (flag3){
      
        printf("Continuar (s/n) ?\n");
        scanf(" %s", escolha);
        
        
        
        if(strcmp("sim",escolha) == 0 || strcmp("Sim",escolha) == 0 || strcmp("SIM",escolha) == 0 || strcmp("s",escolha) == 0 || strcmp("S",escolha) == 0) {
        flag3 = false;
        flag = true;
       
        }else if (strcmp("nao",escolha) == 0 || strcmp("Nao",escolha) == 0 || strcmp("NAO",escolha) == 0 || strcmp("n",escolha) == 0 || strcmp("N",escolha) == 0){
          flag3= false;
          flag2 = false;
         
}else {
 printf("ERRO: Resposta invalida!\n");
        flag3 = true;
    
}
  }  
  
}
  
  
  printf("Encerrando o programa...");  
    
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
