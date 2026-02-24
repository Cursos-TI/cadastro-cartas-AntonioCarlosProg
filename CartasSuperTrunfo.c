#include <stdio.h>


int main() {
    

  // Variáveis para a Carta 1
    char estado1[20];
    char codigo1[5];
    char cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Variáveis para a Carta 2
    char estado2[20];
    char codigo2[5];
    char cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // --- CADASTRO DA CARTA 1 ---
    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %s", estado1); // Espaço antes do %c

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1); // ADICIONE UM ESPAÇO AQUI ANTES DO %s

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Espaço antes do %

    printf("População: ");
    scanf(" %d", &populacao1); // Espaço antes do %d

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (bilhões): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (bilhões): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --- EXIBIÇÃO DOS DADOS ---
printf("\n==================================\n");
printf("      CARTAS DO SUPER TRUNFO\n");
printf("==================================\n");

printf("\nCARTA 1:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontos1);

printf("\n----------------------------------\n");

printf("\nCARTA 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontos2);

printf("\n==================================\n");
printf("Pressione ENTER para encerrar...");

getchar(); // limpa o \n que sobrou
getchar(); // espera o ENTER real

return 0;

}

    