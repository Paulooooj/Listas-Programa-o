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

  int pedido;
  float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, total;
  char escolha;

    do{

    printf("Cahorro quente 1 \nHamburger 2 \nCheeseburger 3 \nEggcheeserbuger 4 \nRefrigerante 5\n");
    scanf("%d", &pedido);

    switch(pedido){
    case 1:
    printf("Informe o número de Cachorro quente: ");
    scanf("%f", &p1);
    p1 = p1 * 1.50;
    break;
    case 2:
    printf("Informe o número de Hamburger: ");
    scanf("%f", &p2);
    p2 = p2 * 2.00;
    break;
    case 3:
    printf("Informe o número de Cheeseburger: ");
    scanf("%f", &p3);
    p3 = p3 * 2.50;
    break;
    case 4:
    printf("Informe o número de Eggcheeseburger: ");
    scanf("%f", &p4);
    p4 = p4 * 3.00;
    break;
    case 5:
    printf("Informe o número de Refrigerante: ");
    scanf("%f", &p5);
    p5 = p5 * 1.50;
    break;


    }

    printf("Se deseja pedir mais alguma coisa digite 's' se não 'n': \n");
    scanf(" %c", &escolha);


  }while(escolha != 'n');

  total = p1 + p2 + p3 + p4 + p5;
  printf("\t Conta: \n");
  if(p1 > 0){
  printf("Valor pago no cachorro quente R$:%.2f reais\n", p1);
  }
  if(p2 > 0){
  printf("Valor pago no Hamburger R$:%.2f reais\n", p2);
  }
  if(p3 > 0){
  printf("Valor pago no Cheeseburger R$:%.2f reais\n", p3);
  }
  if(p4 > 0){
  printf("Valor pago no Eggcheeseburger R$:%.2f reais\n", p4);
  }
  if(p5 > 0){
  printf("Valor pago no Refrigerante R$:%.2f reais\n", p5);
  }

  printf("O valor total do pedido é R$:%.2f reais", total);




// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
