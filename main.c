#include <stdio.h>
#include <stdlib.h>

int main() {

    typedef struct Paciente {
    char nome[100];
    int idade;
    float peso;
    float altura;
    char genero;
    struct Paciente *prox;
    } paciente_t;

    
}