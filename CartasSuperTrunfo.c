#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float areal;
    float pibl;
    int pontos_turisticos1;

    //carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float areal2;
    float pibl2;
    int pontos_turisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da Cidade: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &areal);
    printf("PIB: ");
    scanf("%f", &pibl);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da Cidade: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &areal2);
    printf("PIB: ");
    scanf("%f", &pibl2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", areal);
    printf("PIB: %.2f\n", pibl);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", areal2);
    printf("PIB: %.2f\n", pibl2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;
}
