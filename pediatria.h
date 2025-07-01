#ifndef PEDIATRIA_H
#define PEDIATRIA_H

typedef struct Paciente {
    char nome[100];
    int idade;
    float peso;
    float altura;
    char genero;
    struct Paciente *prox;
} paciente_t;

typedef enum { //tipos 
    ABAIXO,
    NORMAL,
    SOBREPESO,
    OBESIDADE
} IMCInfantil;

paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero);

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero);

/* Consulte: https://abran.org.br/calculadoras/imc-infantil */
IMCInfantil calcula_imc(paciente_t *crianca);

#endif
