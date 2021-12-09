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

int divisor, n1 = 0, n2 = 0, numero = 1, i=1, cont = 0;
float resultado = 0;

while(numero <= 150){
         
 i = 1;
cont = 0;

while(numero >= i){
 
 if(numero % i == 0){
    cont ++;
} 
i ++;
}
if(cont == 2){
      printf("resultado %d\n", numero);
}
 
 numero ++;
      
      
}
   // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
