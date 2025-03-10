#include <stdio.h>
int main() {
    // Menu
    int opcao;
    int opcao2;

    // Variáveis carta 1
    char nomec[20];
    int pontosT;
    float pib, area, populacao;
    char cod1;
    int cod2;
    float pibc, densidade;
    double superpoder;

    // Variáveis carta 2
    char nomec2[20];
    int pontosT2;
    float pib2, area2, populacao2;
    char cod12;
    int cod22;
    float pibc2, densidade2;
    double superpoder2;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
          printf("Iniciando o jogo\n");
          break;
        case 2:
          printf("Regras do Jogo:\n");
          printf("1. Vence a carta com o maior valor escolhido\n");
          break;
        case 3:
          printf("Saindo\n");
          break;
        default:
          printf("Opção inválida tente novamente.\n");
    }

    // Entrada de dados
    printf("Digite o código da cidade (por exemplo, A01, A02, B01, B02): ");
    scanf(" %c %d", &cod1, &cod2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", nomec);

    printf("\nDigite a população: ");
    scanf("%f", &populacao);

    printf("\nDigite a área: ");
    scanf("%f", &area);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d", &pontosT);

    // Entrada de dados 2
    printf("\nDigite o código da cidade (por exemplo, A01, A02, B01, B02): ");
    scanf(" %c %d", &cod12, &cod22);
    
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nomec2);

    printf("\nDigite a população: ");
    scanf("%f", &populacao2);

    printf("\nDigite a área: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d", &pontosT2);

    // Cálculos
    densidade = populacao / area;
    pibc = pib / populacao;
    superpoder = populacao + area + pib + pontosT + pibc + densidade;

    // Cálculos 2
    densidade2 = populacao2 / area2;
    pibc2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosT2 + pibc2 + densidade2;

    //Menu de comparação
    printf("Nome: %s / %s\n", nomec, nomec2);
    printf("Escolha uma opção:\n");
    printf("1. Comparar por população\n");
    printf("2. Comparar por área\n");
    printf("3. Comparar por PIB\n");
    printf("4. Comparar por pontos turísticos\n");
    printf("5. Comparar por densidade demográfica\n");
    printf("6. Comparar por PIB per capita\n");
    printf("7. Comparar por superpoder\n");
    scanf("%d", &opcao);

    //Comparação das cartas
    switch (opcao2) {
      case 1:
        if (populacao = populacao2){
          printf("Deu empate");
        } else {
          if (populacao > populacao2){
            printf("%s venceu no quesito população", nomec);
          } else {
            printf("%s venceu no quesito população", nomec2);
          }
        }
        break;
      case 2:
        if (area = area2){
          printf("Deu empate");
        } else {
          if (area > area2){
            printf("%s venceu no quesito área", nomec);
          } else {
            printf("%s venceu no quesito área", nomec2);
          }
        }
        break;
      case 3:
        if (area = area2){
          printf("Deu empate");
        } else {
          if (pib > pib2){
            printf("%s venceu no quesito PIB", nomec);
          } else {
            printf("%s venceu no quesito PIB", nomec2);
          }
        }
        break;
      case 4:
        if (area = area2){
          printf("Deu empate");
        } else {
          if (pontosT > pontosT2){
            printf("%s venceu no quesito pontos turísticos", nomec);
          } else {
            printf("%s venceu no quesito pontos turísticos", nomec2);
          }
        }
        break;
      case 5:
        if (area = area2){
          printf("Deu empate");
        } else {
          if (densidade > densidade2){
            printf("%s venceu no quesito densidade demográfica", nomec);
          } else {
            printf("%s venceu no quesito densidade demográfica", nomec2);
          }
        }
        break;
      case 6:
        if (area = area2){
          printf("Deu empate");
        } else {
          if (pibc > pibc2){
            printf("%s venceu no quesito PIB per capita", nomec);
          } else {
            printf("%s venceu no quesito PIB per capita", nomec2);
          }
        }
        break;
      case 7:
        if (area = area2){
          printf("Deu empate");
        } else {
          if (superpoder > superpoder2){
            printf("%s venceu no quesito superpoder", nomec);
          } else {
            printf("%s venceu no quesito superpoder", nomec2);
          }
        }
        break;
      default:
        printf("Opção inválida tente novamente.\n");
    }
    return 0;
}
