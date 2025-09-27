#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char codigo[4];  // Área para definição das variáveis para armazenar as propriedades das cidades
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos; 
  
  printf("Digite o codigo da cidade: "); // Área para entrada de dados
  scanf("%s", &codigo);

  printf("Nome da cidade: ");
  scanf("%s", &cidade);

  printf("População: ");
  scanf("%f", &populacao);

  printf("Área (Km²): ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

  printf("Código da cidade: %s\n", codigo); // Área para exibição dos dados da cidade
  printf("Nome da cidade: %s\n", cidade);
  printf("A população da cidade:", populacao);
  printf("A área da cidade: %fr\n", area);
  printf("O PIB da cidade: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos);
  
  

return 0;
} 
