#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;
    printf("\n Informe 4 notas seguidas: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media = (n1+n2+n3+n4)/4.0;
    printf("\n A média das 4 notas informadas é de %.2f\n\n", media);

    return 0;
}
