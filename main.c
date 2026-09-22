#include <stdio.h>
 
struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
};

main() {

    struct Aluno aluno[30];
    int quantidade_Alunos;


    printf("\n=========================\n       CADASTRO \n=========================\n");

    printf("Quantos alunos deseja cadastrar?\n");
    printf("Resposta: ");
    scanf("%d", &quantidade_Alunos);

    for (int i = 0; i <= quantidade_Alunos; i++)
    {
    printf("\n--- ALUNO %d ---\n", i + 1);    
    printf("Qual é o nome do aluno: \n");
    printf("Resposta: ");
    scanf("%49s", aluno[i].nome);
    }
    
}