#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); //como chamamos essa fun��o,
    //para que o programa n�o d� erro, � preciso passar o valor float com v�rgula ao inv�s de ponto.

    float ap1, ap2, ap3, premio, apostaTotal;
    float p1, p2, p3; // p = pr�mio de cada apostador

    printf("\n\n\t - Mega 'C'ena - \n\n");
    printf(" Apostador 1 - Valor R$: ");
    scanf("%f", &ap1);
    printf(" Apostador 2 - Valor R$:  ");
    scanf("%f", &ap2);
    printf(" Apostador 3 - Valor R$:  ");
    scanf("%f", &ap3);
    printf(" Informe o valor total do pr�mio: ");
    scanf("%f", &premio);

    apostaTotal = ap1 + ap2 + ap3;

    p1 = (ap1 / apostaTotal) * premio;
    p2 = (ap2 / apostaTotal) * premio;
    p3 = (ap3 / apostaTotal) * premio;

    printf("\n\n\t - Resultado da Premia��o -\n");
    printf("Apostador 1 com R$ %.2f levou R$ %.2f\n", ap1, p1);
    printf("Apostador 2 com R$ %.2f levou R$ %.2f\n", ap2, p2);
    printf("Apostador 3 com R$ %.2f levou R$ %.2f\n", ap3, p3);

    return 0;
}
