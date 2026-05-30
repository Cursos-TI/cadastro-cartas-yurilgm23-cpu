#include <stdio.h>


// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20], estado2[20], cod1[3], cod2[3], city1[20], city2[20];
  int pop1, pts1, pop2, pts2;
  float area1, pib1, area2, pib2;


  // Área para entrada de dados
  
  // Carta 01
  printf("Digite o Estado 01 \n");
  scanf("%s", estado1);

  printf("Digite o Código 01 (Primeira letra do Estado + um numero de 01-04) \n");
  scanf("%s", cod1);

  printf("Digite a Cidade 01 \n");
  scanf("%s", city1);
  
  printf("Digite o número da População 01 \n");
  scanf("%d", &pop1);

  printf("Digite a Área 01 \n");
  scanf("%f", &area1);

  printf("Digite o PIB 01 \n");
  scanf("%f", &pib1);
  
  printf("Digite o nº de Pontos Turísticos 01 \n");
  scanf("%d", &pts1);

  // Carta 02
  printf("Digite o Estado 02 \n");
  scanf("%s", estado2);

  printf("Digite o Código 02 (Primeira letra do Estado + um numero de 01-04) \n");
  scanf("%s", cod2);

  printf("Digite a Cidade 02 \n");
  scanf("%s", city2);
  
  printf("Digite o número da População 02 \n");
  scanf("%d", &pop2);

  printf("Digite a Área 02 \n");
  scanf("%f", &area2);

  printf("Digite o PIB 02 \n");
  scanf("%f", &pib2);
  
  printf("Digite o nº de Pontos Turísticos 02 \n");
  scanf("%d", &pts2);

  // Área para exibição dos dados da cidade
  // Resultados 1 e 2
  printf("Resultados:\n Estado 01: %s;\n Código 01: %s;\n Cidade 01: %s;\n População 01: %d;\n Área 01: %f;\n PIB 01: %f;\n Pontos turísticos 01: %d;\n", estado1, cod1, city1, pop1, area1, pib1, pts1);
  printf("Estado 02: %s;\n Código 02: %s;\n Cidade 02: %s;\n População 02: %d;\n Área 02: %f;\n PIB 02: %f;\n Pontos turísticos 02: %d;\n", estado2, cod2, city2, pop2, area2, pib2, pts2);

return 0;
} 
