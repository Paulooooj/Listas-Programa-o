#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
/* Escreva um programa que leia o sexo, a idade e o peso de um grupo de 10 pessoas,
determine e imprima o peso médio dos homens e a idade média das mulheres do
grupo.*/

    int main() {
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
     // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade,cont, h = 0, f = 0;
    float peso, mediapeso = 0, mediaidade = 0;
    char sexo;

    for(cont = 1; cont <= 2; cont++){

        printf("Informe m para sexo masculino e f para sexo feminino: ");
        scanf(" %c", &sexo);
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);
        printf("Informe o peso: ");
        scanf("%f", &peso);

        if(sexo == 'f'){

            mediaidade = idade + mediaidade;
            f++;
        
        }else if (sexo == 'm'){
            
            mediapeso = peso + mediapeso;
            h ++;
        }
    }  
    if(f > 0){
    mediaidade = mediaidade / f;
    }
    if(h > 0){
    mediapeso = mediapeso / h;
    }
        
    printf("A idade média das mulheres é de %.1f\n",mediaidade);
    printf("O peso médio dos homens é de  %.1f\n", mediapeso);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}

// depois corrigir a parte de quando não escolho nem uma vez algum sexo ele retornar um valor estranho