#include <stdio.h>

// Desafio Super Trunfo.c

int main() {
                                                // comentarios de dados reais, para facilitar o preenchimento
    char estado[3], estado_2[3];                // MG                // RJ
    int codigo_carta, codigo_carta_2;           // 01                // 02
    char nome_cidade[50], nome_cidade_2[50];    // Juiz de Fora      // Rio de Janeiro
    int populacao, populacao_2;                 // 540.756 mil       // 6.211.223 milhoes
    float area_km, area_km_2;                   // 1.435,749 km² mil // 1.200,330 km²  mil  
    float PIB, PIB_2;                           // 35.145,34         // 53.078,23
    int pontos_turisticos, pontos_turisticos_2; // 29                // 58                  fonte: IBGE
    float densidade, densidade_2;
    float  PIB_per_Capita,  PIB_per_Capita_2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // coletando dados para a primeira carta:
    printf ("\nOlá, vamos preencher os dados da sua primeira carta! \n");

    printf ("\nPor favor insirar o codigo da carta entre: ( 01 e 04 ) ");
    scanf ("%d", &codigo_carta);

    printf ("Insira a sigla do estado: ");
    scanf ("%s", estado);

    printf ("Por favor insira o nome da cidade: ");
    scanf (" %[^\n]", nome_cidade);

    printf ("Por favor insira o numero de habitantes (use ponto como separador decimal): ");
    scanf ("%d", &populacao);

    printf ("Por favor insira  KM² (use ponto como separador decimal): ");
    scanf ("%f", &area_km);

    printf ("Por favor insira o PIB (use ponto como separador decimal): ");
    scanf ("%f", &PIB);

    printf ("Por favor insira numero de pontos turistcos: ");
    scanf ("%d", &pontos_turisticos);

    ///////////////////////////////////////////////////////////////////////

    // coletando dados para a segunda carta:
    printf ("\nOlá, vamos preencher os dados da sua segunda carta! \n");

    printf ("\nPor favor insirar o codigo da carta entre: ( 01 e 04 ) ");
    scanf ("%d", &codigo_carta_2);

    printf ("Insira a sigla do estado: ");
    scanf ("%s", estado_2);
    
    printf ("Por favor insira o nome da cidade: ");
    scanf (" %[^\n]", nome_cidade_2);
    
    printf ("Por favor insira o numero de habitantes (use ponto como separador descimal): ");
    scanf ("%d", &populacao_2);
    
    printf ("Por favor insira  KM² (use ponto como separador descimal): ");
    scanf ("%f", &area_km_2);
    
    printf ("Por favor insira o PIB (use ponto como separador descimal): ");
    scanf ("%f", &PIB_2);
    
    printf ("Por favor insira numero de pontos turistcos: ");
    scanf ("%d", &pontos_turisticos_2);
    
    // calculando densidade populacional:
    densidade = (float) (populacao / area_km);
    densidade_2 = (float) (populacao_2 / area_km_2);

    // calculando  PIB per Capita
    PIB_per_Capita = (float) (PIB / populacao);
    PIB_per_Capita_2 = (float) (PIB_2 / populacao_2);  

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // reunindo os dados da carta 01:
    printf ("\nCarta 01:\n");
    printf ("Estado: %s \n", estado);
    printf ("Código: %s%02d \n", estado, codigo_carta);
    printf ("Nome da cidade: %s \n", nome_cidade);
    printf ("População: %d \n", populacao);
    printf ("Area em KM²: %.3f \n", area_km);
    printf ("PIB: R$ %.2f Reais \n", PIB);
    printf ("Pontos turisticos: %d \n",pontos_turisticos);
    printf ("A densidade populacional da primeira carta será: %.2f Hab/KM² \n", densidade);
    printf ("O  PIB per Capita será de: R$ %.2f Reais \n", PIB_per_Capita);

    // reunindo os dados da carta 02:
    printf ("\nCarta 02:\n");
    printf ("Estado: %s \n", estado_2);
    printf ("Código: %s%02d \n", estado_2, codigo_carta_2);
    printf ("Nome da cidade: %s \n", nome_cidade_2);
    printf ("População: %d \n", populacao_2);
    printf ("Area em KM²:%.3f \n", area_km_2);
    printf ("PIB: R$ %.2f Reais \n", PIB_2);
    printf ("Pontos turisticos: %d \n",pontos_turisticos_2);
    printf ("A densidade populacional da segunda carta será: %.2f Hab/KM² \n", densidade_2);
    printf ("O  PIB per Capita será de: R$ %.2f Reais \n", PIB_per_Capita_2);

    return 0;
}
