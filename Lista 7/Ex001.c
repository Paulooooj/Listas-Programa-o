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

    int n, cont; 
    float media, peso, soma = 0;

    printf("Informe o número de pessoas pertecentes ao grupo: ");
    scanf("%d", &n);

    for(cont = 1; cont <= n; cont++){

        printf("Informe o peso: ");
        scanf("%f", &peso);
        soma = peso + soma;

    }
    media = soma / n;
    printf("A média de peso do grupo contistiuido de %d pessoas é de %.2f", n, media);



 // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}
