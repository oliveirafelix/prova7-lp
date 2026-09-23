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
    int opcao;
    int total_Alunos = 0;
do {

    printf("\n=========================\n       INICIO \n=========================\n");
    printf("1 - CADASTRAR ALUNOS");
    printf("2 - VER ALUNOS CADASTRADOS");
    printf("3 - VER APROVADOS/REPROVADOS");
    printf("4 - VER BOLETIM");
    printf("5 - ENCERRAR SISTEMA");
    


    switch (opcao)
    {
    case 1:
    printf("\n=========================\n       CADASTRO \n=========================\n");

    printf("Quantos alunos deseja cadastrar?\n");
    printf("Resposta: ");   
    scanf("%d", &quantidade_Alunos);
    total_Alunos = quantidade_Alunos + total_Alunos;

    for (int i = 1; i <= quantidade_Alunos; i++)
    {
        printf("\n--- ALUNO %d ---\n", i );    
        printf("Nome do aluno:");
        scanf("%49s", aluno[i].nome);
        printf("Primeira nota: ");
        scanf("%f", &aluno[i].nota1);
        printf("Segunda nota: ");
        scanf("%f", &aluno[i].nota2);
        printf("Terceira nota: ");
        scanf("%f", &aluno[i].nota3);
        printf("Quarta nota: ");
        scanf("%f", &aluno[i].nota4);
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 + aluno[i].nota4) / 4;
    }
        
    break;
    

    case 2: 
    if(total_Alunos == 0) {
        printf("Não temos alunos cadastro no momento!");
    }

    else{
        for (int i = 1; i > total_Alunos; i++)
        {
            printf("Aluno %d: %s\n", i, aluno[i].nome);
        }
        
    }

    case 3: 
        if(total_Alunos == 0) {
            printf("Não temos alunos cadastro no momento!");
        }
        else{
            
        }


    default:
        break;
    }
    
} while(opcao != 5);

}