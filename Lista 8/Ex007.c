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
/*Escreva um programa que preencha um vetor com N (N ≤ 20) números inteiros, calcule e
mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números
positivos; o segundo deve conter os números negativos. Cada vetor resultante vai ter, no
máximo, N posições, que poderão não ser completamente utilizadas.*/
    
    int i, vetor1[20], vetor2[20], vetor3[20], cont = 0, cont1 = 0;

    for(i = 0; i < 20; i ++){
        printf("Informe número inteiros: ");
        scanf("%d", &vetor1[i]);

        if(vetor1[i] > 0){
            vetor2[cont] = vetor1[i];
            cont ++;
        }else if(vetor1[i] < 0){
            vetor3[cont1] = vetor1[i];
            cont1 ++;
        }
    }
    printf("\nNúmeros positivos:\n");
    for(i = 0; i < cont; i ++){

        printf(" %d ", vetor2[i]);
    }
    printf("\nNúmeros negativos:\n");
    for(i = 0; i < cont1; i ++){

        printf("%d ", vetor3[i]);

    
    }
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
