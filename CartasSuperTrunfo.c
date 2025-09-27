#include <stdio.h>

//Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char codigo_1[4],codigo_2[4];  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade_1[50],cidade_2[50];
  float populacao_1,populacao_2;
  float area_1,area_2;
  float pib_1,pib_2;
  int pontos_turisticos_1,pontos_turisticos_2; 

  printf("Desafio Super Trunfo - Países \n");
  
  printf("\nDescreva as informações da carta 1: \n");  // Área para entrada de dados
  printf("Digite o codigo da cidade: "); 
  scanf("%s", &codigo_1);

  printf("Nome da cidade: ");
  scanf("%s", &cidade_1);

  printf("População: ");
  scanf("%f", &populacao_1);

  printf("Área (Km²): ");
  scanf("%f", &area_1);

  printf("PIB: ");
  scanf("%f", &pib_1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos_1);

  printf("\n");
  printf("Descreva as informações da carta 2: \n");
  printf("Digite o codigo da cidade: "); 
  scanf("%s", &codigo_2);

  printf("Nome da cidade: ");
  scanf("%s", &cidade_2);

  printf("População: ");
  scanf("%f", &populacao_2);

  printf("Área (Km²): ");
  scanf("%f", &area_2);

  printf("PIB: ");
  scanf("%f", &pib_2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos_2);

  printf("\n");  // Área para exibição dos dados da cidade
  printf("Carta 1\n");
  printf("Código da cidade: %s\n", codigo_1); 
  printf("Nome da cidade: %s\n", cidade_1);
  printf("A população da cidade:", populacao_1);
  printf("A área da cidade: %fr\n", area_1);
  printf("O PIB da cidade: %f\n", pib_1);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos_1);

  printf("\n");
  printf("Carta 2\n");
  printf("Código da cidade: %s\n", codigo_2); 
  printf("Nome da cidade: %s\n", cidade_2);
  printf("A população da cidade:", populacao_2);
  printf("A área da cidade: %fr\n", area_2);
  printf("O PIB da cidade: %f\n", pib_2);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);
  
  

return 0;
} 
