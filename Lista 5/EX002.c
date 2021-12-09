#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
  
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero, p, imp, cont,soma;
    float media;
    cont = 0;
    p = 0; 
    imp = 0;
    soma = 0;

while ( numero != 0 ){
     printf("Informe um número:\n");
     scanf("%d", &numero);
     if(numero > 0){
     if((numero % 2) == 0){
         p ++;
     } else {
         imp ++;
    }
    soma = soma + numero;
    cont ++;
 }

}
media = soma / cont;
printf("Número de par:%d\n", p);
printf("Número de impar:%d\n", imp);
printf("Média:%.0f\n", media);

   SetConsoleOutputCP(CPAGE_DEFAULT);
return 0;
}
