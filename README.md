# IMC Infantil em C

Este projeto em C simula um sistema de avaliação de IMC (Índice de Massa Corporal) para crianças de 6 a 15 anos, com base em idade e gênero. Utiliza estruturas de dados para armazenar pacientes e classifica o IMC de acordo com faixas específicas para meninos e meninas, conforme referências pediátricas.

## Funcionalidades

- Cadastro de pacientes com nome, idade, peso, altura e gênero
- Cálculo do IMC infantil com base em idade e sexo
- Classificação do IMC: Abaixo do normal, Normal, Sobrepeso ou Obesidade
- Armazenamento dos pacientes em uma lista encadeada
- Modularização com uso de header file (`pediatria.h`)

## Tecnologias utilizadas

- Linguagem C
- Biblioteca padrão (`stdio.h`, `stdlib.h`, `string.h`, `ctype.h`, `math.h`)
- Estruturas: `struct`, `enum`, ponteiros e lista encadeada

## Como compilar

Use o compilador `gcc` com os seguintes comandos:

```bash
gcc main.c -o imc
./imc
>>>>>>> da59d27999dc9a3b0e9eeb86a7cb9c37ed41cca0
