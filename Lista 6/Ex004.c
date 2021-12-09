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

    char escolha;
    float saldo = 0, saque = 0, deposito = 0;


    do{
        printf("Opçôes:\n (a) Consulta Saldo \n (b) Saque \n (c) Depósito \n (d) Encerrar\n");
        scanf(" %c", &escolha);
        switch(escolha){
        case 'a':
        printf("Saldo R$: %.2f reais\n", saldo);
        break;
        case 'b':
        printf("Informe o valor do saque: ");
    scanf("%f", &saque);
        if(saque < saldo){
        saldo = saldo - saque;
        printf("Saque realizado com sucesso.\n");
        }else{
        printf("Não foi possivel fazer o saque pois você é pobre! \n\n");
        }
        break;
        case 'c':
        printf("Informe o valor do depósito:\n ");
        scanf("%f", &deposito);
        saldo = saldo + deposito;
    
        printf("Depósito realizado com sucesso.\n");
        break;
        }


    }while(escolha != 'd');

    printf("Encerrando o programa, obrigado pela confianção no banco Psoj...");




 // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
