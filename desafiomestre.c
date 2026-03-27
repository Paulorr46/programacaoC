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
    int primeiroAtributo, segundoAtributo;
    int resultadoAtributo1 = -1, resultadoAtributo2 = -1;

  // Área para entrada de dados
    printf("****Carta 1****\n");
    printf("informe uma letra de A - H: \n");
    scanf(" %c", &estado1);

    printf("informe um codigo de 01 a 04: \n");
    scanf(" %s", codigo1);
    
    printf("Nome da Cidade da carta 1: \n");
    scanf(" %s", cidade1);

    printf("Informe a População: \n");
    scanf(" %d", &populacao1);

    printf("Informe a area da cidade: \n");
    scanf(" %f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("informe a quantidade de pontos turísticos tem nessa cidade: \n\n");
    scanf(" %d", &turisticos1);

    //carta 2
    printf("****Carta 2****\n");
    printf("Letra do Estado de A - H: \n");
    scanf(" %c", &estado2);

    printf("Codigo para o Estado de 01 - 04: \n");
    scanf(" %s", codigo2);

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




    printf("### Escolha que atributo você deseja comparar ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Numero de pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo){

        case 1:
            printf("Você escolheu o atributo População!\n");
            resultadoAtributo1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
            printf("Você escolheu o atributo Área!\n");
            resultadoAtributo1 = area1 > area2 ? 1 : 0;
            break;

          case 3:
            printf("Você escolheu o atributo Pib!\n");
            resultadoAtributo1 = pib1 > pib2 ? 1 : 0;
            break;

          case 4:
            printf("Você escolheu o atributo Pontos Turpisticos\n");
            resultadoAtributo1 = turisticos1 > turisticos2 ? 1 : 0;
            break;

          case 5:
            printf("Você escolheu o atributo Densidade Demográfica\n");
            resultadoAtributo1 = inversodensidade1 > inversodensidade2 ? 1 : 0;
            break;

        default:
            printf("Opção Inválida!\n");

    }
    

        printf("Escolha o segundo atributo!\n");
        printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Numero de pontos Turisticos\n");
        printf("5. Densidade Demográfica\n");

        printf("Escolha a Comparação!\n");
        scanf("%d", &segundoAtributo);

        if(primeiroAtributo == segundoAtributo){
            printf("Você escolheu atributos iguais!\n");
        } else{
            switch( segundoAtributo)
            {
            case 1:
            printf("Você escolheu o atributo População!\n");
            resultadoAtributo2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
            printf("Você escolheu o atributo Área!\n");
            resultadoAtributo2 = area1 > area2 ? 1 : 0;
            break;

          case 3:
            printf("Você escolheu o atributo Pib!\n");
            resultadoAtributo2 = pib1 > pib2 ? 1 : 0;
            break;

          case 4:
            printf("Você escolheu o atributo Pontos Turpisticos\n");
            resultadoAtributo2 = turisticos1 > turisticos2 ? 1 : 0;
            break;

          case 5:
            printf("Você escolheu o atributo Densidade Demográfica\n");
            resultadoAtributo2 = inversodensidade1 > inversodensidade2 ? 1 : 0;
            break;

        default:
            printf("Opção Inválida!\n");
            }
        }

            if (resultadoAtributo1 == 1 && resultadoAtributo2 == 1)
            {
                printf("Carta 1 Venceu!\n");

            } else if(resultadoAtributo1 == 0 && resultadoAtributo2 == 0) {
                printf("Carta 2 Venceu!!\n");

            } else {
                printf("Empatou!\n");
            }




return 0;
} 
