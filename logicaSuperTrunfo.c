#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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

    // Saída de dados
    printf("\n\nCódigo da cidade: %c%d / %c%d\n", cod1, cod2, cod12, cod22);
    printf("Nome: %s / %s\n", nomec, nomec2);
    printf("População: %.3f / %.3f\n", populacao, populacao2);
    printf("Área: %.3f Km² / %.3f Km²\n", area, area2);
    printf("PIB: %.3f / %.3f\n", pib, pib2);
    printf("Número de pontos turísticos: %d / %d\n", pontosT, pontosT2);
    printf("Densidade populacional: %.3f / %.3f\n", densidade, densidade2);
    printf("PIB per capita: %.3f / %.3f\n", pibc, pibc2);
    printf("Super poder: %.3f / %.3f\n", superpoder, superpoder2);

    //Comparação das cartas
    if(densidade > densidade2){
        printf("\nNa categoria densidade populacional %s venceu", nomec);
    }
    else {
        printf("\nNa categoria densidade populacional %s venceu", nomec2);
    }
    if(superpoder > superpoder2){
        printf("\nNa categoria geral %s venceu",nomec);
    }
    else{
        printf("\nNa categoria geral %s venceu\n", nomec2);
    }
    return 0;
}
