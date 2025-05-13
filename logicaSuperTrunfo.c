#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

typedef struct Carta {
    char estado[50];
    int codigo;
    char nome[50];
    float populacao;
    float area;
    float pib;
    int pontos_tur;
} Carta;

float calcularDensidadePopulacional(Carta cidade) {
    return cidade.populacao / cidade.area;
}

int main() {
    int cont_A = 0; // Inicializar contadores
    int cont_B = 0;
    Carta carta1;
    Carta carta2;

    // Cadastro das Cartas
    printf("Digite o estado da cidade 1: ");
    scanf("%s", carta1.estado);
    printf("Digite o codigo da cidade 1: ");
    scanf("%d", &carta1.codigo); // Corrigido para %d
    printf("Digite o nome da cidade 1: ");
    scanf("%s", carta1.nome);
    printf("Digite a populacao da cidade 1: ");
    scanf("%f", &carta1.populacao);
    printf("Digite a area da cidade 1 (em km2): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade 1 (em bilhoes de dolares): ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &carta1.pontos_tur);

    printf("\nDigite o estado da cidade 2: ");
    scanf("%s", carta2.estado);
    printf("Digite o codigo da cidade 2: ");
    scanf("%d", &carta2.codigo);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", carta2.nome);
    printf("Digite a populacao da cidade 2: ");
    scanf("%f", &carta2.populacao);
    printf("Digite a area da cidade 2 (em km2): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade 2 (em bilhoes de dolares): ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &carta2.pontos_tur);

    // Comparação de Cartas
    if (carta1.populacao > carta2.populacao) {
        printf("\nA cidade vencedora em população é: %s\n", carta1.nome);
        cont_A++;
    } else if (carta1.populacao < carta2.populacao) {
        printf("A cidade vencedora em população é: %s\n", carta2.nome);
        cont_B++;
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    // Comparação por área
    if (carta1.area > carta2.area) {
        printf("A cidade vencedora em área é: %s\n", carta1.nome);
        cont_A++;
    } else if (carta1.area < carta2.area) {
        printf("A cidade vencedora em área é: %s\n", carta2.nome);
        cont_B++;
    } else {
        printf("As cidades têm a mesma área.\n");
    }

    // Comparação por PIB
    if (carta1.pib > carta2.pib) {
        printf("A cidade vencedora em PIB é: %s\n", carta1.nome);
        cont_A++;
    } else if (carta1.pib < carta2.pib) {
        printf("A cidade vencedora em PIB é: %s\n", carta2.nome);
        cont_B++;
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }

    // Comparação por número de pontos turísticos
    if (carta1.pontos_tur > carta2.pontos_tur) {
        printf("A cidade vencedora em pontos turísticos é: %s\n", carta1.nome);
        cont_A++;
    } else if (carta1.pontos_tur < carta2.pontos_tur) {
        printf("A cidade vencedora em pontos turísticos é: %s\n", carta2.nome);
        cont_B++;
    } else {
        printf("As cidades têm o mesmo número de pontos turísticos.\n");
    }

    // Comparação por densidade populacional
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);

    if (densidade1 < densidade2) {
        printf("A cidade vencedora em densidade populacional é: %s\n", carta1.nome);    
        cont_A++;
    } else if (densidade1 > densidade2) {
        printf("A cidade vencedora em densidade populacional é: %s\n", carta2.nome);
        cont_B++;
    } else {
        printf("As cidades têm a mesma densidade populacional.\n");
    }

    // Exibição dos Resultados
    printf("O critério para vitória será: a carta que acumular mais pontos entre a comparação de atributos.\n");
    printf("A carta vencedora é a carta: \n");

    if (cont_A > cont_B) {
        printf("Cidade: %s\n", carta1.nome);
    } else if (cont_B > cont_A) {
        printf("Cidade: %s\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}