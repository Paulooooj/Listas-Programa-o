#include <stdio.h>
int main() {
int idade, cont, h, f; 
char sexo;
cont = 0;
h = 0; 
f = 0;
while (cont < 2) {


printf("Digite m para sexo masculino e f para feminino:\n");
scanf( " %c", &sexo);

printf("Digite sua idade:\n");
scanf("%d", &idade);
if(idade > 18) {
if(sexo == 'm') {
    h ++;
}else if(sexo == 'f') {
    f ++;
}
}
cont ++;
}
printf("Homens: %d\n", h);
printf("Mulheres: %d\n", f);

return 0;
}
