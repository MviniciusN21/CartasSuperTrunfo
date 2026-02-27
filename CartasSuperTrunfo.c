#include <stdio.h>

int main() {

    // ===== CARTA 1 - RIO DE JANEIRO =====
    char estado1[] = "Rio de Janeiro";
    char codigo1[] = "RJ01";
    char cidade1[] = "Rio de Janeiro";
    int populacao1 = 6748000;
    float area1 = 1200.25;
    float pib1 = 364.78; 
    int pontosTuristicos1 = 30;

    // ===== CARTA 2 - SAO PAULO =====
    char estado2[] = "Sao Paulo";
    char codigo2[] = "SP01";
    char cidade2[] = "Sao Paulo";
    int populacao2 = 12330000;
    float area2 = 1521.11;
    float pib2 = 699.28;
    int pontosTuristicos2 = 40;

    // ===== CARTA 3 - MINAS GERAIS =====
    char estado3[] = "Minas Gerais";
    char codigo3[] = "MG01";
    char cidade3[] = "Belo Horizonte";
    int populacao3 = 2530000;
    float area3 = 331.40;
    float pib3 = 105.83;
    int pontosTuristicos3 = 20;

    // ===== EXIBICAO =====

    printf("===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos2);

    printf("===== CARTA 3 =====\n");
    printf("Estado: %s\n", estado3);
    printf("Codigo: %s\n", codigo3);
    printf("Cidade: %s\n", cidade3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km2\n", area3);
    printf("PIB: %.2f bilhoes\n", pib3);
    printf("Pontos Turisticos: %d\n", pontosTuristicos3);

    return 0;
}
