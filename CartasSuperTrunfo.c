#include <stdio.h>

int main() {
    
  // Variáveis para a Carta 1
    char estado1[20];
    char codigo1[5];
    char cidade1[50];
    int pontos1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibCapital1, superPoder1;
  
    // Variáveis para a Carta 2
    char estado2[20];
    char codigo2[5];
    char cidade2[50];
    int pontos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibCapital2, superPoder2;
    
  
    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %s", estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1); 

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("População: ");
    // CORREÇÃO: Usar %lu para unsigned long int
    scanf(" %lu", &populacao1); 

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (bilhões): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    // Calculo Carta 1
    densidade1 = (float)populacao1 / area1;
    pibCapital1 = (pib1 * 1000000000) / (float)populacao1;

    //SUPER PODER = SOMA DE TUDO (DENSIDADE INVERTIDA, QUANTO MENOR, MELHOR)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibCapital1 + (1.0f / densidade1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    // CORREÇÃO: Usar %lu para unsigned long int
    scanf(" %lu", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (bilhões): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibCapital2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibCapital2 + (1.0f / densidade2);

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n==================================\n");
    printf("      CARTAS DO SUPER TRUNFO\n");
    printf("==================================\n");

    printf("\nCARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    // CORREÇÃO: Usar %lu para exibir unsigned long int
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n----------------------------------\n");

    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    // CORREÇÃO: Usar %lu para exibir unsigned long int
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);


    // --- COMPARAÇÃO DE CARTAS ---
    printf("\n--- Comparação de Cartas ---\n");

    // Resultado: 1 se Carta 1 vence, 0 se Carta 2 vence
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    
    // ATENÇÃO: Na densidade, o MENOR valor vence!
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapital1 > pibCapital2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    printf("\n==================================\n");
    printf("Pressione ENTER para encerrar...");

    // Limpeza de buffer mais segura
    while (getchar() != '\n'); // Limpa todo o lixo do buffer até o \n
    getchar(); // Espera o ENTER final


    // NIVEL MESTRE OOOK

    return 0;
}
