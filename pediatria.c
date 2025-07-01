#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pediatria.h"

paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *paciente = (paciente_t *) malloc(sizeof(paciente_t));
    if (paciente == NULL) {
        printf("Ocorreu um erro na criação da lista de pacientes.");
        exit(EXIT_FAILURE);
    }
    strcpy(paciente->nome, nome);
    paciente->idade = idade;
    paciente->altura = altura;
    paciente->peso = peso;
    paciente->genero = genero;
    paciente->prox = NULL;
    return paciente;
}

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *paciente = (paciente_t *) malloc(sizeof(paciente_t));
    if (paciente == NULL) {
        printf("Ocorreu um erro na criação do novo paciente.");
        return;
    }
    paciente_t *atual = primeiro;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = paciente;
    strcpy(paciente->nome, nome);
    paciente->idade = idade;
    paciente->altura = altura;
    paciente->peso = peso;
    paciente->genero = genero;
    paciente->prox = NULL;
}

void classificar_imc(float imc, int idade, char genero) {
    genero = tolower(genero);
    // feminino
    if (genero == 'f' || 'F') {
        if (idade == 6) {
            if (imc < 14.3) printf("Abaixo do normal\n");
            else if (imc <= 16.1) printf("Normal\n");
            else if (imc <= 17.4) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 7) {
            if (imc < 14.9) printf("Abaixo do normal\n");
            else if (imc <= 17.1) printf("Normal\n");
            else if (imc <= 18.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 8) {
            if (imc < 15.6) printf("Abaixo do normal\n");
            else if (imc <= 18.1) printf("Normal\n");
            else if (imc <= 20.3) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 9) {
            if (imc < 16.3) printf("Abaixo do normal\n");
            else if (imc <= 19.1) printf("Normal\n");
            else if (imc <= 21.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 10) {
            if (imc < 17.0) printf("Abaixo do normal\n");
            else if (imc <= 20.1) printf("Normal\n");
            else if (imc <= 23.2) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 11) {
            if (imc < 17.6) printf("Abaixo do normal\n");
            else if (imc <= 21.1) printf("Normal\n");
            else if (imc <= 24.5) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 12) {
            if (imc < 18.3) printf("Abaixo do normal\n");
            else if (imc <= 22.1) printf("Normal\n");
            else if (imc <= 25.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 13) {
            if (imc < 18.9) printf("Abaixo do normal\n");
            else if (imc <= 23.0) printf("Normal\n");
            else if (imc <= 27.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 14) {
            if (imc < 19.3) printf("Abaixo do normal\n");
            else if (imc <= 23.8) printf("Normal\n");
            else if (imc <= 27.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 15) {
            if (imc < 19.6) printf("Abaixo do normal\n");
            else if (imc <= 24.2) printf("Normal\n");
            else if (imc <= 28.8) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
    // masculino
    } else if (genero == 'm' || 'M') {
        if (idade == 6) {
            if (imc < 14.5) printf("Abaixo do normal\n");
            else if (imc <= 16.6) printf("Normal\n");
            else if (imc <= 18.0) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 7) {
            if (imc < 15.0) printf("Abaixo do normal\n");
            else if (imc <= 17.3) printf("Normal\n");
            else if (imc <= 19.1) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 8) {
            if (imc < 15.6) printf("Abaixo do normal\n");
            else if (imc <= 18.3) printf("Normal\n");
            else if (imc <= 20.3) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 9) {
            if (imc < 16.1) printf("Abaixo do normal\n");
            else if (imc <= 18.8) printf("Normal\n");
            else if (imc <= 21.4) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 10) {
            if (imc < 16.7) printf("Abaixo do normal\n");
            else if (imc <= 19.6) printf("Normal\n");
            else if (imc <= 22.5) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 11) {
            if (imc < 17.2) printf("Abaixo do normal\n");
            else if (imc <= 20.4) printf("Normal\n");
            else if (imc <= 23.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 12) {
            if (imc < 17.8) printf("Abaixo do normal\n");
            else if (imc <= 21.1) printf("Normal\n");
            else if (imc <= 24.8) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 13) {
            if (imc < 18.5) printf("Abaixo do normal\n");
            else if (imc <= 22.9) printf("Normal\n");
            else if (imc <= 25.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 14) {
            if (imc < 19.2) printf("Abaixo do normal\n");
            else if (imc <= 22.7) printf("Normal\n");
            else if (imc <= 26.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        } else if (idade == 15) {
            if (imc < 19.9) printf("Abaixo do normal\n");
            else if (imc <= 23.6) printf("Normal\n");
            else if (imc <= 27.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
    } else {
        printf("Genero invalido.\n");
    }
}


void exibirPacientes(paciente_t *lista) {
    paciente_t *atual = lista;
    printf("\n--- | Pacientes Cadastrados | ---\n");
    while(atual != NULL) {
        float imc = atual->peso / (atual->altura * atual->altura);
        printf("\n_______________________________\n");
        printf("Nome: %s\n", atual->nome);
        printf("Idade: %d\n", atual->idade);
        printf("Genero: %c\n", atual->genero);
        printf("Altura: %.2f m\n", atual->altura);
        printf("Peso: %.2f kg\n", atual->peso);
        printf("IMC: %.2f - ", imc);
        classificar_imc(imc, atual->idade, atual->genero);

        atual = atual->prox;
    }
}

IMCInfantil calcula_imc(paciente_t *paciente_t) {
    float imc = paciente_t->peso / (paciente_t->altura * paciente_t->altura);
    int idade = paciente_t->idade;
    char sexo = tolower(paciente_t->genero);
}

int main() {
    char nome[100], genero;
    int idade;
    float peso, altura, imc;
    paciente_t *lista = NULL;
    char continuar;
do {
    printf("\nDigite o nome da crianca: ");
    scanf(" %[^\n]", nome); 



    printf("Digite o genero (F) para Feminino ou (M) para Masculino: ");
    scanf(" %c", &genero);
    genero = tolower(genero);

    printf("Digite a idade (6 a 15): ");
    scanf("%d", &idade);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    if (idade < 6 || idade > 15) {
        printf("Idade nao correspondente.\n");
        continue;
    }
    if (lista == NULL) {
        lista = primeiro_paciente(nome, idade, peso, altura, genero);
    } else {
        novo_paciente(lista, nome, idade, peso, altura, genero);
    }

    printf("\nDeseja adicionar outro paciente? (s/n): ");
    scanf(" %c", &continuar);

} while (continuar == 's' || continuar == 'S');
    imc = peso / (altura * altura);

    // IMC para meninas
    if (genero == 'f') {
        if (idade == 6) {
            if (imc < 14.3) printf("Abaixo do normal\n");
            else if (imc <= 16.1) printf("Normal\n");
            else if (imc <= 17.4) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 7) {
            if (imc < 14.9) printf("Abaixo do normal\n");
            else if (imc <= 17.1) printf("Normal\n");
            else if (imc <= 18.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 8) {
            if (imc < 15.6) printf("Abaixo do normal\n");
            else if (imc <= 18.1) printf("Normal\n");
            else if (imc <= 20.3) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 9) {
            if (imc < 16.3) printf("Abaixo do normal\n");
            else if (imc <= 19.1) printf("Normal\n");
            else if (imc <= 21.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 10) {
            if (imc < 17.0) printf("Abaixo do normal\n");
            else if (imc <= 20.1) printf("Normal\n");
            else if (imc <= 23.2) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 11) {
            if (imc < 17.6) printf("Abaixo do normal\n");
            else if (imc <= 21.1) printf("Normal\n");
            else if (imc <= 24.5) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 12) {
            if (imc < 18.3) printf("Abaixo do normal\n");
            else if (imc <= 22.1) printf("Normal\n");
            else if (imc <= 25.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 13) {
            if (imc < 18.9) printf("Abaixo do normal\n");
            else if (imc <= 23.0) printf("Normal\n");
            else if (imc <= 27.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 14) {
            if (imc < 19.3) printf("Abaixo do normal\n");
            else if (imc <= 23.8) printf("Normal\n");
            else if (imc <= 27.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 15) {
            if (imc < 19.6) printf("Abaixo do normal\n");
            else if (imc <= 24.2) printf("Normal\n");
            else if (imc <= 28.8) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
    }

    // IMC para meninos
    else if (genero == 'm') {
        if (idade == 6) {
            if (imc < 14.5) printf("Abaixo do normal\n");
            else if (imc <= 16.6) printf("Normal\n");
            else if (imc <= 18.0) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 7) {
            if (imc < 15.0) printf("Abaixo do normal\n");
            else if (imc <= 17.3) printf("Normal\n");
            else if (imc <= 19.1) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 8) {
            if (imc < 15.6) printf("Abaixo do normal\n");
            else if (imc <= 18.3) printf("Normal\n");
            else if (imc <= 20.3) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 9) {
            if (imc < 16.1) printf("Abaixo do normal\n");
            else if (imc <= 18.8) printf("Normal\n");
            else if (imc <= 21.4) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 10) {
            if (imc < 16.7) printf("Abaixo do normal\n");
            else if (imc <= 19.6) printf("Normal\n");
            else if (imc <= 22.5) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 11) {
            if (imc < 17.2) printf("Abaixo do normal\n");
            else if (imc <= 20.4) printf("Normal\n");
            else if (imc <= 23.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 12) {
            if (imc < 17.8) printf("Abaixo do normal\n");
            else if (imc <= 21.1) printf("Normal\n");
            else if (imc <= 24.8) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 13) {
            if (imc < 18.5) printf("Abaixo do normal\n");
            else if (imc <= 22.9) printf("Normal\n");
            else if (imc <= 25.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 14) {
            if (imc < 19.2) printf("Abaixo do normal\n");
            else if (imc <= 22.7) printf("Normal\n");
            else if (imc <= 26.9) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
        if (idade == 15) {
            if (imc < 19.9) printf("Abaixo do normal\n");
            else if (imc <= 23.6) printf("Normal\n");
            else if (imc <= 27.7) printf("Sobrepeso\n");
            else printf("Obesidade\n");
        }
    }

    exibirPacientes(lista);
    
    return 0;
}
