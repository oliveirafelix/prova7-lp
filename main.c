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
    int n1 = 1;
do {

    printf("\n=========================\n       INICIO \n=========================\n");
    printf("1 - CADASTRAR ALUNOS\n");
    printf("2 - VER ALUNOS CADASTRADOS\n");
    printf("3 - VER SITUAÇÃO\n");
    printf("4 - VER BOLETIM\n");
    printf("5 - ENCERRAR SISTEMA\n");
    printf("Responda: ");
    scanf("%d", &opcao);
    


    switch (opcao)
    {
    case 1:
    printf("\n=========================\n       CADASTRO \n=========================\n");

    printf("Quantos alunos deseja cadastrar?\n");
    printf("Resposta: ");   
    scanf("%d", &quantidade_Alunos);
    total_Alunos = quantidade_Alunos + total_Alunos;

    for (int i = n1; i <= total_Alunos; i++)
    {
        printf("\n--- ALUNO %d ---\n", i );    
        printf("Nome do aluno: ");
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
        n1++;
    }
        
    break;
    

    case 2: 
    if(total_Alunos == 0) {
        printf("Não temos alunos cadastro no momento!");
    }
    else{
        printf("\n=========================\n      ALUNOS CADASTROS \n=========================\n");
        for (int i = 1; i <= total_Alunos; i++)
        {
            printf("Aluno %d: %s\n", i, aluno[i].nome);
        }
        break;
    }
    break;

    case 3: 
        if(total_Alunos == 0) {
            printf("Não temos alunos cadastro no momento!");
        }
        else{
            printf("\n==================\n APROVADOS \n==================\n");
            for (int i = 1; i <= total_Alunos; i++)
            {
                if (aluno[i].media >= 7)
                {
                    printf("Aluno %s está APROVADO!\n", aluno[i].nome);
                }
            }
            printf("\n==================\n RECUPERAÇÃO \n==================\n");
            for (int i = 1; i <= total_Alunos; i++) 
            {
                if(aluno[i].media >= 5 && aluno[i].media < 7) {
                    printf("Aluno %s está de RECUPERAÇÂO!\n", aluno[i].nome);
                }
            }
            printf("\n==================\n REPROVADOS \n==================\n");
            for (int i = 1; i <= total_Alunos; i++) 
            {
                if(aluno[i].media < 5 ) {
                    printf("Aluno %s está REPROVADO!\n", aluno[i].nome);
                }
            }
        break;
        }
    break;

    case 4: 
        printf("\n=======================\n BOLETIM \n=======================\n");
        if (total_Alunos == 0)
        {
            printf("Não temos alunos cadastro no momento!");
        }

        else {
            for (int i = 1; i <= total_Alunos; i++)
            {
                printf("Aluno %s\n", aluno[i].nome);
                printf("   Primeira nota: %.2f\n", aluno[i].nota1);
                printf("   Segunda nota: %.2f\n", aluno[i].nota2);
                printf("   Terceira nota: %.2f\n", aluno[i].nota3);
                printf("   Quarta nota: %.2f\n", aluno[i].nota4);
                printf("   Média: %.2f\n", aluno[i].media);
            }
            break;
        }
        break;

    default:
        break;
    }
    
} while(opcao != 5);

}