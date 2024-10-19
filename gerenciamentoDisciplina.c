#include <stdio.h>
#include <string.h>

// Estrutura que vai armazenar os dados do discente
typedef struct {
    long int matricula;
    char nome[40];
    float nota1, nota2, nota3;
    float recuperacao;
    float media;
    char situacao[20];
} tDiscente;