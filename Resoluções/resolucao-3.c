#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, soma;
    printf("\n Informe 3 valores seguidos: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    soma = (n1*n1) + (n2*n2) + (n3*n3); //da mesma forma que o exerc�cio anterior, � poss�vel usar fun��o de exponencia��o tamb�m
    printf("\n A soma do quadrado dos 3 valores � = %d\n\n", soma);

    return 0;
}
