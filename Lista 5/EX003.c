#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
  
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int d1 =0, m1 = 0, a1 = 0, d2, m2, a2;

 printf("Informe o dia ");
scanf("%d", &d1);
printf("Informe o mês: ");
scanf("%d", &m1);
printf("Informe o ano: ");
scanf("%d", &a1);
printf("Informe o dia: ");
scanf("%d", &d2);
printf("Informe o mês: ");
scanf("%d", &m2);
printf("Informe o dia: ");
scanf("%d", &a2);

   while (d1 != d2 || m1 != m2 || a1 != a2) {
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
         
         }
         printf("\n%d/%d/%d", d1, m1, a1);
         
    

   SetConsoleOutputCP(CPAGE_DEFAULT);
return 0;

}
