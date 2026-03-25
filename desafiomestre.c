#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// calculo do pib percapita é: pib / população
// calculo da densidade populacional é: população / area
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, densidadep1, densidadep2;
    float pib1, pib2, pibpercapita1, pibpercapita2;
    int turisticos1, turisticos2;
    float superpoder1, superpoder2;
    float inversodensidade1,inversodensidade2;
    float resultadopopulacao, resultadoarea, resultadodensidadep, resultadopib, resultadopibpercapita, resultadoturisticos, resultadosuperpoder, resultadoinversodensidade;
   
    int opcaoAtributo;

   
  // Área para entrada de dados
    printf("****Carta 1****\n");
    printf("informe uma letra de A - H: \n");
    scanf(" %c", &estado1);

    printf("informe um codigo de 01 a 04: \n");
    scanf(" %s", &codigo1);
    
    printf("Nome da Cidade da carta 1: \n");
    scanf(" %s", &cidade1);

    printf("Informe a População: \n");
    scanf(" %d", &populacao1);

    printf("Informe a area da cidade: \n");
    scanf(" %f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("informe a quantidade de pontos turísticos tem nessa cidade: \n");
    scanf(" %d", &turisticos1);

    //carta 2
    printf("****Carta 2****\n");
    printf("Letra do Estado de A - H: \n");
    scanf(" %c", &estado2);

    printf("Codigo para o Estado de 01 - 04: \n");
    scanf(" %s", &codigo2);

    printf("nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Informe a População: \n");
    scanf(" %d", &populacao2);

    printf("Informe a Area da cidade: \n");
    scanf(" %f", &area2);

    printf("Informe o PIB: \n");
    scanf(" %f", &pib2);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &turisticos2);

    //Área para cálculos
    densidadep1 = (float)(populacao1 / area1);
    densidadep2 = (float)(populacao2 / area2);

    pibpercapita1 = (float)(pib1 / populacao1);
    pibpercapita2 = (float)(pib2 / populacao2);

    //inverso da densidade populacional
    inversodensidade1 = (float)(area1 / populacao1);
    inversodensidade2 = (float)(area2 / populacao2);

    //calculo do super poder
    superpoder1 = (float)(populacao1 + area1 + pib1 + pibpercapita1 + inversodensidade1 + turisticos1);
    superpoder2 = (float)(populacao2 + area2 + pib2 + pibpercapita2 + inversodensidade2 + turisticos2);




   /* printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n\n", turisticos1);
    printf("A Densidade populacional é: %f\n", densidadep1);
    printf("O Pib Percapita é: %f\n", pibpercapita1);
    printf("o Super poder é: %.2f\n", superpoder1);

    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
    printf("A Densidade populacional é: %f\n", densidadep2);
    printf("O Pib Percapita é: %f\n", pibpercapita2);
    printf("o Super poder é: %.2f\n", superpoder2);
*/
    printf("### Escolha que atributo você deseja comparar ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Numero de pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcaoAtributo);

    switch (opcaoAtributo){

        case 1:
        if (populacao1 > populacao2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: População\n");
            printf("População Carta1: %d\n",populacao1);
            printf("População Carta 2: %d\n", populacao2);
            printf("Carta 1 Venceu!\n");
        } else if (populacao1 < populacao2){
           printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: População\n");
            printf("População Carta1: %d\n",populacao1);
            printf("População Carta 2: %d\n", populacao2);
            printf("Carta 2 Venceu!\n");
        } else {
            printf("Houve Empate!\n");
        }
        break;

        case 2:
        if (area1 > area2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Área\n");
            printf("População Carta1: %f\n",area1);
            printf("População Carta 2: %f\n", area2);
            printf("Carta 1 Venceu!\n");
        } else if (area1 < area2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Área\n");
            printf("População Carta1: %f\n",area1);
            printf("População Carta 2: %f\n", area2);
            printf("Carta 2 Venceu!\n");
        } else {
            printf("Houve Empate!\n");
        }
        break;

          case 3:
        if (pib1 > pib2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Pib\n");
            printf("População Carta1: %f\n",pib1);
            printf("População Carta 2: %f\n", pib2);
            printf("Carta 1 Venceu!\n");
        
        } else if (pib1 < pib2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Pib\n");
            printf("População Carta1: %f\n",pib1);
            printf("População Carta 2: %f\n", pib2);
            printf("Carta 2 Venceu!\n");
        } else {
            printf("Houve Empate!\n");
        }
        break;

          case 4:
        if (turisticos1 > turisticos2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Quantidade de Pontos Turisticos\n");
            printf("População Carta1: %d\n",turisticos1);
            printf("População Carta 2: %d\n", turisticos2);
            printf("Carta 1 Venceu!\n");
        } else if (turisticos1 < turisticos2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Quantidade de Pontos Turisticos\n");
            printf("População Carta1: %d\n",turisticos1);
            printf("População Carta 2: %d\n", turisticos2);
            printf("Carta 2 Venceu!\n");
        } else {
            printf("Houve Empate!\n");
        }
        break;

          case 5:
        if (inversodensidade1 < inversodensidade2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Densidade Populacional\n");
            printf("População Carta1: %f\n",densidadep1);
            printf("População Carta 2: %f\n", densidadep2);
            printf("Carta 1 Venceu!\n");
        } else if (inversodensidade1 > inversodensidade2){
            printf("%s X %s\n", cidade1, cidade2);
            printf("Comparação do Atributo: Densidade Populacional\n");
            printf("População Carta1: %f\n",inversodensidade1);
            printf("População Carta 2: %f\n", inversodensidade2);
            printf("Carta 2 Venceu!\n");
        } else {
            printf("Houve Empate!\n");
        }
        break;

        default:
        printf("Opção Inválida!\n");

    }


   

      



return 0;
} 
