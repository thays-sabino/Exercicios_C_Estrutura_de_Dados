#include <stdio.h>
#include <locale.h> //biblioteca respons�vel pela adi��o da lingua portuguesa

int main(){
    setlocale(LC_ALL, "Portuguese"); /*fun��o vinda da biblioteca, ela permite que os caracteres especiais no
                                       portugu�s brasileiro sejam reconhecidos, como: �, �, �, �, � e outros.
                                       OBS: s� funciona em conjunto com a biblioteca <locale.h> e vice-versa*/

    int n1, n2, n3, soma;
    printf("\n Informe 3 valores seguidos: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    soma = n1+n2+n3;
    printf("\n A soma dos 3 valores � = %d\n\n",soma);

    return 0;
}
