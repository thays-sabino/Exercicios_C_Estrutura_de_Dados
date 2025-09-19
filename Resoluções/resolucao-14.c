#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Aluno { //Struct é como um novo tipo de variável no código. Temos int, float, double, struct...
    char nome[50];
    char matricula[10]; //aqui definimos como char, pois a matrícula será armazenada como string
    char curso[50];
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Aluno alunos[2]; // a struct Aluno tem uma variável chamada "alunos"
    int i;

    for (i = 0; i < 2; i++) {
        printf("\n - Cadastro do Aluno %d - \n", i + 1);

        printf(" Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf(" Matrícula: ");
        fgets(alunos[i].matricula, 10, stdin);

        printf(" Curso: ");
        fgets(alunos[i].curso, 50, stdin);
    }

    printf("\n --- Dados dos Alunos Cadastrados --- \n");
    for (i = 0; i < 2; i++) {
        printf("\n Aluno %d\n", i + 1);
        printf(" Nome: %s", alunos[i].nome);
        printf(" Matrícula: %s", alunos[i].matricula);
        printf(" Curso: %s\n", alunos[i].curso);
    }

    return 0;
}
