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
char escolha[8] = "sim", nome[20];




while(strcmp("sim",escolha) == 0){
printf("Informe o nome do aluno:\n ");
scanf("%s", &nome);
printf("Informe a primeira nota:\n ");
scanf("%f", &notaA);

if(notaA < 0 || notaA > 10){
printf("ERRO: Nota invalida! Digite novamente a nota.\n");
printf("Informe a primeira nota:\n ");
scanf("%f", &notaA);

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
printf("Continuar (sim/não) ?\n");
scanf("%s", &escolha);
// usa o && para não entrar em nenhuma das codinções abaixo, se usar || se uma for verdadeira entraria no while.
while(strcmp("sim",escolha) != 0 && strcmp("Sim",escolha) != 0 && strcmp("SIM",escolha) != 0 && strcmp("s",escolha) != 0 && strcmp("S",escolha) != 0 && strcmp("nao",escolha) != 0 && strcmp("Nao",escolha) != 0 && strcmp("NAO",escolha) != 0 && strcmp("n",escolha) != 0 && strcmp("N",escolha) != 0){
//usar != 0 porque diferente de zero qualquer número é erro, por isso usa diferente de zero para não entrar no while;
printf("ERRO: Resposta invalida!\n");
printf("Continuar (s/n) ?\n");
scanf("%s", &escolha);
}
}  



// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
