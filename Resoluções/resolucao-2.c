#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("\n Informe um valor: ");
    scanf("%d", &num);
    printf("\n O quadrado de %d � = %d\n\n",num, num*num); /*aqui � poss�vel realizar a opera��o manualmente (num*num)
                                                            ou importando a biblioteca <math.h> e utilizando a fun��o
                                                            de exponencia��o => pow(base, expoente)*/

    return 0;
}
