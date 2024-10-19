#include <stdio.h>
#include <string.h>

// Estrutura que vai armazenar os dados do aluno
typedef struct {
    long int matricula;
    char nome[40];
    float nota1, nota2, nota3;
    float recuperacao;
    float media;
    char situacao[20];
} tAluno;

// Função para imprimir os dados do aluno
void imprimeAluno(tAluno aluno) {
    if (aluno.recuperacao < 0.001) {
        printf("\t%-12ld %-20s %-6.1f %-6.1f %-6.1f %-11s %-6.1f %-10s\n", 
        aluno.matricula, aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3, "-", aluno.media, aluno.situacao);
    } else {
        printf("\t%-12ld %-20s %-6.1f %-6.1f %-6.1f %-11.1f %-6.1f %-10s\n", 
        aluno.matricula, aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3, aluno.recuperacao, aluno.media, aluno.situacao);
    }
}