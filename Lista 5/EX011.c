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

int divisor, n1 = 0, n2 = 0, cont = 0, n3 = 0;
float resultado = 0;

printf("Informe o número do divisor:");
scanf("%d", &divisor);
printf("Inicio do intervalo:");
scanf("%d", &n1);
printf("Final do intervalo:");
scanf("%d", &n2);
cont = n1;

while(cont <= n2){
        

       cont ++;
       resultado = cont % divisor;
       
       if(resultado == 0){
    
}
}
   
   printf("resultado %d\n", cont);
   
   
   // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
