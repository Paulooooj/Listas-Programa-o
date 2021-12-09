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

  int d1 =0, m1 = 0, a1 = 0, d2, cont = 0;

  
printf("Informe o dia ");
scanf("%d", &d1);
printf("Informe o mês: ");
scanf("%d", &m1);
printf("Informe o ano: ");
scanf("%d", &a1);
printf("Informe uma quantidade de dias: ");
scanf("%d", &d2);


while(cont < d2){
  
 printf("\n%d/%d/%d",d1,m1,a1);
        if(m1 == 2 && a1 % 4 != 0){
            if(d1 == 28){
            m1 ++;
            d1 = 0;
        } else {
            d1 ++;
        }
        }else if(m1 == 2 && a1 % 4 == 0){
           if(d1 == 29){
            m1 ++;
            d1 = 0;
        }else {
            d1 ++;
        } 
        } 
        if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
            if(d1 == 30) {
            m1 ++;
            d1 = 0;
            }else {
                d1 ++;
            }}
        if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
        if(m1 == 12 && d1 == 31){
          a1 ++;
          m1 = 1;
          d1 = 1;
         
         }else if(d1 == 31){
           m1 ++;
           d1 = 1;
        }else {
           d1 ++;
        }
      }
         cont ++;
         }
         printf("\n%d/%d/%d", d1, m1, a1);
         


    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
