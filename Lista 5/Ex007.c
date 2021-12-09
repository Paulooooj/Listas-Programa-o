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
/* Entre com o nome do aluno: Joao da Silva
Entre com a nota A: 5.0
Entre com a nota B: 6.0
O aluno João da Silva tem uma média: 5.66 */

int cont = 0;
float notaA, notaB, media;
char nome[20];

while(cont < 3){
printf("Informe o nome do aluno:\n ");
scanf(" %s", nome);
printf("Informe a primeira nota:\n ");
scanf("%f", &notaA);
printf("Informe a segunda nota:\n ");
scanf("%f", &notaB);
media = (notaA * 1 + notaB * 2) / 3;
printf("O aluno %s tem uma média: %.2f\n", nome, media);


cont ++;


}
    
    
// Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
