#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("\n Informe um valor: ");
    scanf("%d", &num);
    printf("\n O quadrado de %d é = %d\n\n",num, num*num); /*aqui é possível realizar a operação manualmente (num*num)
                                                            ou importando a biblioteca <math.h> e utilizando a função
                                                            de exponenciação => pow(base, expoente)*/

    return 0;
}
