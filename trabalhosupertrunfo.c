#include <stdio.h>

int main() {
    char estado[50];
    char codigo[50];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidadepopulacional;
    float pibpercapita;
    float superpoder;
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

//cadastro de cartas

    printf("Cadastro de carta 1\n");

    printf("Digite o Estado:\n");
    scanf(" %s", estado);

    printf("Digite o Código:\n");
    scanf(" %s", codigo);

    printf("Digite a Cidade:\n");
    scanf(" %s", cidade);

    printf("Digite a População:\n");
    scanf("%lu", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("\n\n");

// variavel de carta1
 
    densidadepopulacional = (float) populacao / area;
    pibpercapita = pib / populacao;
    superpoder = 1 / densidadepopulacional + populacao + area + pib + pontos_turisticos + pibpercapita;

// cadastro de carta 2
    printf("Cadastro de carta 2\n");

    printf("Digite o Estado:\n");
    scanf(" %s", estado2);

    printf("Digite o Código:\n");
    scanf(" %s", codigo2);

    printf("Digite a Cidade:\n");
    scanf(" %s", cidade2);

    printf("Digite a População:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    printf("\n\n");

// variavel de carta 2
    
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = 1 / densidadepopulacional2 + populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2;


//cartas cadastradas

    printf("Carta cadastrada1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n",populacao / area);
    printf("PIB per Capita: %.2f reais\n",pib / populacao);
    printf("Super Poder: %f\n", 1 / densidadepopulacional + populacao + area + pib + pontos_turisticos + pibpercapita );
    printf("\n\n");

//cadastro carta 2

    printf("Carta cadastrada 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n",populacao2 / area2);
    printf("PIB per Capita: %.2f reais\n",pib2 / populacao2);
    printf("Super Poder: %f\n", 1 / densidadepopulacional2 + populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 );
    

    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao2 > populacao) ? 2 : 1);
    printf("Área: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area2 > area) ? 2 : 1);
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib2 > pib) ? 2 : 1);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos > pontos_turisticos2) ? 1 : 2, (pontos_turisticos2 > pontos_turisticos) ? 2 : 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadepopulacional < densidadepopulacional2) ? 1 : 2, (densidadepopulacional2 < densidadepopulacional) ? 2 : 1);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita > pibpercapita2) ? 1 : 2, (pibpercapita2 > pibpercapita) ? 2 : 1);
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder > superpoder2) ? 1 : 2, (superpoder2 > superpoder) ? 2 : 1);


 }
