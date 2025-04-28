#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

                                                // comentarios de dados reais, para facilitar o preenchimento
    int codigo_cidade, codigo_cidade_2;         // 01            // 02
    char nome_cidade[50], nome_cidade_2[50];    // Juiz de Fora  // Rio de Janeiro
    int populacao, populacao_2;                 // 540.756       // 6.211.223
    float area_km, area_km_2;                   // 1.435,749 km² // 1.200,330 km²    
    float PIB, PIB_2;                           // 35.145,34     // 53.078,23
    int pontos_turisticos, pontos_turisticos_2; // 29            // 58                  fonte: IBGE


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // coletando dados para a primeira carta:
    printf ("\nOlá, vamos preencher os dados da sua primeira carta! \n");


    printf ("Por favor insirar o codigo da cidade entre: ( 01 e 04 ) ");
    scanf ("%d", &codigo_cidade);

    printf ("Por favor insira o nome da cidade: ");
    scanf (" %[^\n]", nome_cidade);

    printf ("Por favor insira o numero de habitantes (sem pontos e virgulas): ");
    scanf ("%d", &populacao);

    printf ("Por favor insira  KM² (sem pontos e virgulas): ");
    scanf ("%f", &area_km);

    printf ("Por favor insira o PIB (sem pontos e virgulas): ");
    scanf ("%f", &PIB);

    printf ("Por favor insira numero de pontos turistcos: ");
    scanf ("%d", &pontos_turisticos);

    // coletando dados para a segunda carta:
    printf ("\nOlá, vamos preencher os dados da sua segunda carta! \n");


    printf ("Por favor insirar o codigo da carta entre: ( 01 e 04 ) ");
    scanf ("%d", &codigo_cidade_2);
    
    printf ("Por favor insira o nome da cidade: ");
    scanf (" %[^\n]", nome_cidade_2);
    
    printf ("Por favor insira o numero de habitantes (sem pontos e virgulas): ");
    scanf ("%d", &populacao_2);
    
    printf ("Por favor insira  KM² (sem pontos e virgulas): ");
    scanf ("%f", &area_km_2);
    
    printf ("Por favor insira o PIB (sem pontos e virgulas): ");
    scanf ("%f", &PIB_2);
    
    printf ("Por favor insira numero de pontos turistcos: ");
    scanf ("%d", &pontos_turisticos_2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // reunindo os dados:

    printf ("\nCarta 01:\n");

    printf ("Codigo da cidade: %d \n", codigo_cidade);
    printf ("Nome da cidade: %s \n", nome_cidade);
    printf ("População: %d \n", populacao);
    printf ("Area em KM²: %f \n", area_km);
    printf ("PIB: %f \n", PIB);
    printf ("Pontos turisticos: %d \n",pontos_turisticos);

    printf ("\nCarta 02:\n");

    printf ("Cóodigo da cidade: %d \n", codigo_cidade_2);
    printf ("Nome da cidade: %s \n", nome_cidade_2);
    printf ("População: %d \n", populacao_2);
    printf ("Area em KM²:%f \n", area_km_2);
    printf ("PIB: %f \n", PIB_2);
    printf ("Pontos turisticos: %d \n",pontos_turisticos_2);

    return 0;
}