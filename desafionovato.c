#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[50], codigo2 [50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
  // Área para entrada de dados
  /*
    printf("Informe a seguintes informações das cartas: \n");
    printf("informe uma letra de A a H correspondente ao estado desejado da carta 1: \n");
    scanf("%c", &estado1);

    printf("informe um codigo para a carta que será a letra do estado seguida de um numero de 01 a 04 da carta 1: \n");
    scanf("%s", &codigo1);
    
    printf("Nome da Cidade da carta 1: \n");
    scanf("%s", &cidade1);

    printf("O número de habitantes da cidade da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Qual a área e Km² dessa cidade: \n");
    scanf("%f", &area1);

    printf("qual o PIB dessa cidade: \n");
    scanf("%f", &pib1);

    printf("informe a quantidade de pontos turísticos tem nessa cidade: \n");
    scanf("%d", &turisticos1);
*/
    //carta 2
    printf("informe os mesmos dados agora para a Carta 2 \n");
    printf("Letra do Estado de A - H: \n");
    scanf("%c", &estado2);

    printf("Codigo para o Estado de 01 - 04: \n");
    scanf(" %s", &codigo2);

    printf("nome da cidade: \n");
    scanf("%s", cidade2);

    printf("população: \n");
    scanf("%d", &populacao2);

    printf("Area da cidade: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: \n");
    scanf("%d", turisticos2);

  // Área para exibição dos dados da cidade
  
    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);



return 0;
} 
