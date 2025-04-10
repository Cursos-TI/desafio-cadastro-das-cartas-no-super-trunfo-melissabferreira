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
    int ncarta1;
    char estado1[20];
    char codigodacarta1 [20];
    char nomedacidade1[20];
    int populacao1;
    float areaemkm1;
    float PIB1;
    int numerodepontosturisticos1;
        
    // Exibição dos Dados das Cartas:

    printf("Carta 1: \n");
    scanf("%c", &ncarta1);

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
    
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: %c\n", ncarta1);
    printf("Estado 1: %s\n", estado1);
    printf("Codigo da carta 1: %s\n", codigodacarta1);
    printf("Cidade 1: %s\n", nomedacidade1);
    printf("Populacao 1: %d\n", populacao1);
    printf("Area em Km²: %.2f Km²\n", areaemkm1);
    printf("PIB 1: %.2f\n", PIB1);
    printf("Numero de pontos turisticos 1: %d\n", numerodepontosturisticos1);


    return 0;
}
