#include <stdio.h>

int main()
{
    // variaveis declarada ---

    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[20], nomeCidade2[20];
    float area1, area2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePop1, densidadePop2;
    float superPoder1, superPoder2;
    float pibPerCapita1, pibPerCapita2;
    float pib1, pib2;
    unsigned long int populacao1, populacao2; // para coletar valores maiores

    // Carta 1 

    printf("Insira os dados da carta 1 abaixo:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%s", codigoCarta1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%ld", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n\n"); //para linhas
    
    // Segunda carta

    printf("Insira os dados da carta 2 abaixo:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    printf("\n\n");