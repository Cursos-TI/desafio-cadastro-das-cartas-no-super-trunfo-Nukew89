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

    char estado[50];
    int populacao;
    float area;
    int pontoTuristico;
   

    printf("Cadastre os dados das duas cartas do Super Trunfo: \n");

    printf("Qual nome do Estado?: \n");
    scanf("%s", estado);

    printf("Qual a Populacao desse estado? \n");
    scanf("%d", &populacao);

    printf("Qual Área aproximada desse estado? \n");
    scanf("%f", &area);

    printf("Quantos Pontos turisticos Possue este Estado? \n");
    scanf("%d", &pontoTuristico);

    printf("Dados da carta 1 sao: \n");

    printf("Nome do estado: %s \n", estado);
    printf("Com uma populacao de: %d \n", populacao);
    printf("Sua area aproximada é de: %f \n", area);
    printf("Quantidade de Pontos Turisticos: %d \n", pontoTuristico);
        

    
 
    return 0;
}
