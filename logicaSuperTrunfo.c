#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[5];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibpercapita1;

    // Entrada de dados da carta 1
    printf("****** Cadastro da Carta 1 *******\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // lê até o ENTER

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibpercapita2;

    // Entrada de dados da carta 2
    printf("\n******* Cadastro da Carta 2 *******\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // ===== EXIBIÇÃO =====
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // ===== COMPARAÇÃO =====
    // Aqui você escolhe QUAL ATRIBUTO comparar
    // Altere o valor da variável "atributo" (1=População, 2=Área, 3=PIB, 4=Densidade, 5=PIB per capita)
    int atributo = 1; // <<< ALTERE AQUI

    printf("\n===== Comparação de Cartas =====\n");

    if (atributo == 1) {
        printf("Comparação por População:\n");
        printf("%s (%d) vs %s (%d)\n", cidade1, populacao1, cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Vencedora: %s\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Vencedora: %s\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 2) {
        printf("Comparação por Área:\n");
        printf("%s (%.2f) vs %s (%.2f)\n", cidade1, area1, cidade2, area2);
        if (area1 > area2)
            printf("Vencedora: %s\n", cidade1);
        else if (area2 > area1)
            printf("Vencedora: %s\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 3) {
        printf("Comparação por PIB:\n");
        printf("%s (%.2f) vs %s (%.2f)\n", cidade1, pib1, cidade2, pib2);
        if (pib1 > pib2)
            printf("Vencedora: %s\n", cidade1);
        else if (pib2 > pib1)
            printf("Vencedora: %s\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 4) {
        printf("Comparação por Densidade Populacional:\n");
        printf("%s (%.2f) vs %s (%.2f)\n", cidade1, densidade1, cidade2, densidade2);
        // Na densidade, vence quem for MENOR
        if (densidade1 < densidade2)
            printf("Vencedora: %s\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Vencedora: %s\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 5) {
        printf("Comparação por PIB per capita:\n");
        printf("%s (%.2f) vs %s (%.2f)\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2)
            printf("Vencedora: %s\n", cidade1);
        else if (pibpercapita2 > pibpercapita1)
            printf("Vencedora: %s\n", cidade2);
        else
            printf("Empate!\n");
    }

    return 0;
}
