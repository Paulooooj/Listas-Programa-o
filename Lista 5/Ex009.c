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

 
float notaA, notaB, media;
char escolha, nome[20];



    while(escolha != 'n'){
        printf("Informe o nome do aluno:\n ");
        scanf(" %s", nome);
        printf("Informe a primeira nota:\n ");
        scanf("%f", &notaA);

        if(notaA < 0 || notaA > 10){
            printf("ERRO: Nota invalida! Digite novamente a nota.\n");
            printf("Informe a primeira nota:\n ");
            scanf("%f", &notaA);
// tive que separar em vários if pois não ia verificar as outras opções.
}
        if(notaA >= 0 && notaA <= 10){
            printf("Informe a segunda nota:\n ");
             scanf("%f", &notaB);

}
        if(notaB < 0 || notaB > 10){
             printf("ERRO: Nota invalida! Digite novamente a nota.\n");
             printf("Informe a segunda nota:\n ");
             scanf("%f", &notaB);
}

media = (notaA * 1 + notaB * 2) / 3;
printf("O aluno %s tem a média de: %.2f\n.", nome, media);
printf("Continuar (s/n) ?\n");
scanf(" %c", &escolha);

}
    
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
