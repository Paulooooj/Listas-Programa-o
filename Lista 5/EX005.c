#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
  
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
   int cont1, cont2;
   printf("Informe um número inteiro: ");
scanf("%d", &cont1);
   printf("Informe outro número inteiro:");
  scanf("%d", &cont2);

  while (cont1 <= cont2) {
     printf("%d\n", cont1);
        cont1 ++;
} 
SetConsoleOutputCP(CPAGE_DEFAULT);
return 0;
}
