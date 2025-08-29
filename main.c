#include <stdio.h>
#include <stdlib.h>

typedef struct Paciente {
    char nome[100];
    int idade;
    float peso;
    float altura;
    char genero;
    struct Paciente *prox;
} paciente_t;

int main() {
    paciente_t *inicio = NULL;
    paciente_t *fim = NULL;
    char continuar;

    do {
        paciente_t *novo = malloc(sizeof(paciente_t));
        if (novo == NULL) {
            printf("Erro ao alocar memoria.\n");
            return 1;
        }

        printf("Digite o nome da crianca: ");
        scanf(" %[^\n]", novo->nome);

        do {
        printf("Digite a idade: ");
        scanf("%d", &novo->idade);
        if (novo->idade <= 0)
        printf("Idade invalida, digite um valor positivo.\n");
        } while(novo->idade <= 0);

        do {
        printf("Digite o peso (kg): ");
        scanf("%f", &novo->peso);
        if (novo->peso <= 0)
        printf("Peso invalido, digite um valor maior que zero.\n");
        } while (novo->peso <= 0);

        do {
        printf("Digite a altura (m): ");
        scanf("%f", &novo->altura);
        if (novo->altura <= 0)
        printf("Altura invalida, digite um valor maior que zero.\n");
        } while (novo->altura <= 0);

        do {
        printf("Digite o gênero (M/F): ");
        scanf(" %c", &novo->genero);
        if (novo->genero != 'M' && novo->genero != 'F' && novo->genero != 'm' && novo->genero != 'f')
        printf("Gênero inválido. Digite M ou F.\n");
        } while (novo->genero != 'M' && novo->genero != 'F' && novo->genero != 'm' && novo->genero != 'f');

        novo->prox = NULL;

        if (inicio == NULL) {
            inicio = novo;
            fim = novo;
        } else {
            fim->prox = novo;
            fim = novo;
        }

        printf("Deseja adicionar outra crianca? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    system("cls");

    printf("\n|---- Lista de Pacientes ----|\n");
    paciente_t *atual = inicio;
    while (atual != NULL) {
        float imc = atual->peso / (atual->altura * atual->altura);
        printf("\nNome: %s\nIdade: %d\nGenero: %c\nIMC: %.2f\n", atual->nome, atual->idade, atual->genero, imc);

        if (imc < 14.5)
            printf("Classificacao: Abaixo do peso\n");
        else if (imc < 18)
            printf("Classificacao: Peso normal\n");
        else
            printf("Classificacao: Sobrepeso\n");

        atual = atual->prox;
    }

    atual = inicio;
    while (atual != NULL) {
        paciente_t *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}
