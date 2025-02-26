#include <stdio.h>

int main() {
 // variaves carta1:
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // variaves carta2:
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

 
    // coletando dados das Cartas1:
    printf("Carta 01,  digite estado (com uma letra):\n");
    scanf(" %c", &estado1);

    printf("Digite codigo da carta (com a letra do estado + um numero):\n");
    scanf("%s", &codigo_carta1);

    printf("digite nome da cidade:\n");
    scanf("%s", &nome_cidade1);

    printf("digite população:\n");
    scanf("%d", &populacao1);

    printf("Digite area:\n");
    scanf("%f", &area1);

    printf("Digite PIB:\n");
    scanf("%f", &pib1);

    printf("digite pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);


     // coletando dados das Cartas2:
     printf("Carta 02, digite estado (com uma letra):\n");
     scanf(" %c", &estado2);
 
     printf("Digite codigo da carta (com a letra do estado + um numero):\n");
     scanf("%s", &codigo_carta2);
 
     printf("digite nome da cidade:\n");
     scanf("%s", &nome_cidade2);
 
     printf("digite população:\n");
     scanf("%d", &populacao2);
 
     printf("Digite area:\n");
     scanf("%f", &area2);
 
     printf("Digite PIB:\n");
     scanf("%f", &pib2);
 
     printf("digite pontos turisticos:\n");
     scanf("%d", &pontos_turisticos2);
 

    // Exibição dos Dados das Cartas1:
    printf("\n--Dados carta 1--\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1
    );
    
    // Exibição dos Dados das Cartas2:
    printf("\n--Dados carta 2--\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);



    return 0;
}
