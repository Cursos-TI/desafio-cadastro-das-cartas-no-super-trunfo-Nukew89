#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // variaveis que serao utilizadas
        // variavel carta 1:

        char estado[50];
        int populacao;
        float area;
        int pontoTuristico;
        float PIB;

        // variavel carta 2:

        char estado_2[50];
        int populacao_2;
        float area_2;
        int pontoTuristico_2;
        float PIB_2;
       
        // Breve explicação do passo a passo a ser feito:

        printf("Cadastre os dados das duas cartas do Super Trunfo: \n");
        printf("Vamos comecar pela Primeira carta! \n");
        
        // iniciando armazenamento de dados por terminal:
        printf("Qual nome do Estado?: \n");
        scanf("%s", estado);

        printf("Qual a Populacao desse estado? \n");
        scanf("%d", &populacao);

        printf("Qual Área aproximada desse estado? \n");
        scanf("%f", &area);

        printf("Quantos Pontos turisticos Possue este Estado? \n");
        scanf("%d", &pontoTuristico);

        printf("Qual valor do PIB nesse Estado? \n");
        scanf("%f", &PIB);

        // finalizando armazenamento e efetuando a saída de dados:
        printf("Dados da carta 1 sao: \n");

        printf("Nome do estado: %s \n", estado);
        printf("Com uma populacao de: %d \n", populacao);
        printf("Sua area aproximada é de: %f \n", area);
        printf("Quantidade de Pontos Turisticos: %d \n", pontoTuristico);
        printf("Valor do PIB: %f \n", PIB);

        printf("Vamos cadastrar a Segunda Carta: \n");



        // inicio informações segunda carta:

       // Armazenamento dos dados via terminal:
        printf("Qual nome do Estado?: \n");
        scanf("%s", estado_2);

        printf("Qual a Populacao desse estado? \n");
        scanf("%d", &populacao_2);

        printf("Qual Área aproximada desse estado? \n");
        scanf("%f", &area_2);

        printf("Quantos Pontos turisticos Possue este Estado? \n");
        scanf("%d", &pontoTuristico_2);

        printf("Qual valor do PIB nesse Estado? \n");
        scanf("%f", &PIB_2);

        // Saida de dados carta2 :
        printf("Dados da carta 2 sao: \n");

        printf("Nome do estado: %s \n", estado_2);
        printf("Com uma populacao de: %d \n", populacao_2);
        printf("Sua area aproximada é de: %f \n", area_2);
        printf("Quantidade de Pontos Turisticos: %d \n", pontoTuristico_2);
        printf("Valor do PIB: %f \n", PIB_2);

        // Agradecimento player
        printf("Parabens por cadastrar as duas cartas! \n");


    
 
    return 0;
}
