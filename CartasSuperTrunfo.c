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
    
    printf("\n\n"); //linhas


     // calculando primeira carta --

     densidadePop1 = (float) populacao1 / area1;
     pibPerCapita1 = (pib1 * 1e9) / (float) populacao1; // 1e9 multiplicado para conversap de BI para $
     superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + ( 1.0f / densidadePop1 ); // o super poder é a soma de todos atributos 
 
    // calculando carta2 --
    
    densidadePop2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / (float) populacao2; 
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + ( 1.0f / densidadePop2 ); 
    
    // mostrando carta1 --

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2fKm2\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidadePop1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n\n");

    // mostrando os dados carta 2 --

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2fKm2\n", area2);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidadePop2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // selecionando atributos da carta --

    int atributo; // variavel para guardar a opção escolhida --

    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &atributo);

    printf("\n\n");

    switch (atributo) // comparando com switch / case
    {
    case 1:
        // COMP ppopulacao
        printf("Comparacao de Cartas (Atributo: Populacao)\n\n");

        // atr carta 1 **
        printf("Carta 1 - %s:(%c) %ld\n", nomeCidade1, estado1, populacao1);

        // atr carta 2 **
        printf("Carta 2 - %s:(%c) %ld\n", nomeCidade2, estado2, populacao2);

        if (populacao1 > populacao2)
        {
            // Caso a populacao da carta 1 for maior, aparece msg vencedora
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (populacao1 < populacao2)
        {
            // ou se a pop carta 2 for maior *
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // Caso seja igual, ira mostrar msg de empate
            printf("Empate!\n");
        }
        break;