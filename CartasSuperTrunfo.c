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

    int ncarta1, ncarta2;
    char estado1[20], estado2[20];
    char codigodacarta1 [20], codigodacarta2[20];
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float areaemkm1, areaemkm2;
    float PIB1, PIB2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
        
    // Exibição dos Dados das Cartas 1:

    printf("Numero da Carta 1: \n");
    scanf("%d", &ncarta1);

    printf("Estado 1: \n");
    scanf("%s", &estado1);

    printf("Codigo da carta 1: \n");
    scanf("%s", &codigodacarta1);

    printf("Nome da cidade 1: \n");
    scanf("%s", &nomedacidade1);

    printf("População 1: \n");
    scanf("%d", &populacao1);

    printf("Area em Km² 1: \n");
    scanf("%f", &areaemkm1);

    printf("PIB 1: \n");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos 1: \n");
    scanf("%d", &numerodepontosturisticos1);
    
    // Exibição dos Dados das Cartas 2:

    printf("Numero da Carta 2: \n");
    scanf("%d", &ncarta2);

    printf("Estado 2: \n");
    scanf("%s", &estado2);

    printf("Codigo da carta 2: \n");
    scanf("%s", &codigodacarta2);

    printf("Nome da cidade 2: \n");
    scanf("%s", &nomedacidade2);

    printf("População 2: \n");
    scanf("%d", &populacao2);

    printf("Area em Km² 2: \n");
    scanf("%f", &areaemkm2);

    printf("PIB 2: \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos 2: \n");
    scanf("%d", &numerodepontosturisticos2);

    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta: %d\n", ncarta1);
    printf("Estado 1: %s\n", estado1);
    printf("Codigo da carta 1: %s\n", codigodacarta1);
    printf("Cidade 1: %s\n", nomedacidade1);
    printf("Populacao 1: %d\n", populacao1);
    printf("Area em Km²: %.2f Km²\n", areaemkm1);
    printf("PIB 1: %.2f\n", PIB1);
    printf("Numero de pontos turisticos 1: %d\n", numerodepontosturisticos1);

    printf("Carta: %d\n", ncarta2);
    printf("Estado 2: %s\n", estado2);
    printf("Codigo da carta 2: %s\n", codigodacarta2);
    printf("Cidade 2: %s\n", nomedacidade2);
    printf("Populacao 2: %d\n", populacao2);
    printf("Area em Km²: %.2f Km²\n", areaemkm2);
    printf("PIB 2: %.2f\n", PIB2);
    printf("Numero de pontos turisticos 2: %d\n", numerodepontosturisticos2);

    

    return 0;
}
