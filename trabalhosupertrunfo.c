#include <stdio.h>

int main() {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

//cadastro de cartas

    printf("Cadastro de carta 1\n");

    printf("Digite o Estado:\n");
    scanf(" %s", estado);

    printf("Digite o Código:\n");
    scanf(" %s", codigo);

    printf("Digite a Cidade:\n");
    scanf(" %s", cidade);

    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("\n\n");
//carta 2
    printf("Cadastro de carta 2\n");

    printf("Digite o Estado:\n");
    scanf(" %s", estado2);

    printf("Digite o Código:\n");
    scanf(" %s", codigo2);

    printf("Digite a Cidade:\n");
    scanf(" %s", cidade2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    printf("\n\n");
    //cartas cadastradas

    printf("Carta cadastrada1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", (float) populacao / area);
    printf("PIB per Capita: %.2f reais\n", (float) pib / populacao);

    printf("\n\n");
//cadastro carta 2

    printf("Carta cadastrada 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", (float) populacao2 / area2);
    printf("PIB per Capita: %.2f reais\n", (float) pib2 / populacao2);
}