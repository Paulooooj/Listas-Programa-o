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

    int n, can1 = 0, can2 = 0, nulo = 0; 
    do{
    printf("1- candidato1, 2- candidato2, 3-nulo e 4-encerrar: ");
    scanf("%d", &n);

    switch(n){
        case 1: 
        can1 ++;
        break;
        case 2:
        can2 ++;
        break;
        case 3:
        nulo ++;

    }


    }while(n != 4);


    if(can1 > can2){
        printf("O Candidato 1 foi o vencedor, com %d votos.\n");
        printf("O candidato 1 teve %d votos.\n", can2);
        printf("O Total de votos nulos foi %d votos.\n", nulo);


    }else{
        printf("O candidato 2 foi o vencedor, com %d votos.\n", can2);
        printf("O candidato 1 teve %d votos.\n", can1);
        printf("O Total de votos nulos foi %d votos.\n", nulo);

    }
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
