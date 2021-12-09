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

    int i; 
    float vetor[11], vetor2[11], result[11];
    char operacoes[11];
    for(i = 0; i < 5; i ++){
        printf("Informe valores inteiros %dº número: ", i + 1);
        scanf("%f", &vetor[i]);

    }
    for(i = 0; i < 5; i ++){
        printf("Informe valores inteiros %dº número: ", i + 11);
        scanf("%f", &vetor2[i]);
        
    }
        for(i = 0; i < 5; i ++){
            printf("Informe operações básicas %dº: ", i + 1);// seria para colocar + - / *
            scanf(" %c", &operacoes[i]);
        
    }
    for(i = 0; i < 5; i ++){

        if(operacoes[i] == '+'){
            result[i] = vetor[i] + vetor2[i]; 
    }else if(operacoes[i] == '-'){
            result[i] = vetor[i] - vetor2[i]; 
    }else if(operacoes[i] == '*'){
            result[i] = vetor[i] * vetor2[i]; 
    }else if(operacoes[i] == '/'){
            if(vetor2[i] != 0){
            result[i] = vetor[i] / vetor2[i]; 
    }else{
        printf("Não é possivel dividir por zero!!\n");
    }
    }
    }
    
    for(i = 0; i < 5; i ++){

        printf("%f\n", result[i]);

    }
    
    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
    }
