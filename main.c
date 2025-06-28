#include <stdio.h>
#include <string.h> // Para usar strcpy

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[3]; // Ex: "SP"
    char codigo_carta[10]; // Ex: "CARTA001"
    char nome_cidade[50];
    int populacao;
    float area; // em km²
    float pib; // em bilhões de Reais
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularAtributosDerivados(Carta *carta) {
    if (carta->area > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0.0; // Evita divisão por zero
    }

    if (carta->populacao > 0) {
        carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao; // PIB em Reais, não bilhões
    } else {
        carta->pib_per_capita = 0.0; // Evita divisão por zero
    }
}

int main() {
    // 1. Receber os dados de duas cartas (pré-definidas para o nível básico)
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "SP001");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.1;
    carta1.pib = 763.8; // em bilhões
    carta1.pontos_turisticos = 150;
    calcularAtributosDerivados(&carta1);

    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "RJ001");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1255.0;
    carta2.pib = 370.0; // em bilhões
    carta2.pontos_turisticos = 120;
    calcularAtributosDerivados(&carta2);

    // 2. Exibir os dados completos das cartas (para verificação)
    printf("--- Detalhes da Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n\n", carta1.pib_per_capita);

    printf("--- Detalhes da Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n\n", carta2.pib_per_capita);


    // 3. Comparar um atributo escolhido (diretamente no código para este nível)
    // Atributo escolhido para comparação: População
    printf("--- Comparacao de Cartas (Atributo: Populacao) ---\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome_cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", carta1.nome_cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Exemplo de comparação com Densidade Populacional (menor valor vence)
    printf("--- Comparacao de Cartas (Atributo: Densidade Populacional) ---\n");
    printf("Carta 1 - %s (%s): %.2f hab/km2\n", carta1.nome_cidade, carta1.estado, carta1.densidade_populacional);
    printf("Carta 2 - %s (%s): %.2f hab/km2\n", carta2.nome_cidade, carta2.estado, carta2.densidade_populacional);

    if (carta1.densidade_populacional < carta2.densidade_populacional) { // Menor valor vence
        printf("Resultado: Carta 1 (%s) venceu!\n\n", carta1.nome_cidade);
    } else if (carta2.densidade_populacional < carta1.densidade_populacional) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n\n");
    }

    // Você pode adicionar mais comparações para outros atributos aqui, seguindo a mesma lógica.
    // Ex: Área (maior vence)
    printf("--- Comparacao de Cartas (Atributo: Area) ---\n");
    printf("Carta 1 - %s (%s): %.2f km2\n", carta1.nome_cidade, carta1.estado, carta1.area);
    printf("Carta 2 - %s (%s): %.2f km2\n", carta2.nome_cidade, carta2.estado, carta2.area);

    if (carta1.area > carta2.area) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", carta1.nome_cidade);
    } else if (carta2.area > carta1.area) {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n\n");
    }


    return 0;
}

#include <stdio.h>
#include <string.h> // Para usar strcpy

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[3]; // Ex: "SP"
    char codigo_carta[10]; // Ex: "CARTA001"
    char nome_cidade[50];
    int populacao;
    float area; // em km²
    float pib; // em bilhões de Reais
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularAtributosDerivados(Carta *carta) {
    if (carta->area > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0.0; // Evita divisão por zero
    }

    if (carta->populacao > 0) {
        carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao; // PIB em Reais, não bilhões
    } else {
        carta->pib_per_capita = 0.0; // Evita divisão por zero
    }
}

// Função para exibir os detalhes de uma carta
void exibirCarta(const Carta *carta) {
    printf("Estado: %s\n", carta->estado);
    printf("Nome da Cidade: %s\n", carta->nome_cidade);
    printf("Populacao: %d\n", carta->populacao);
    printf("Area: %.2f km2\n", carta->area);
    printf("PIB: %.2f bilhoes\n", carta->pib);
    printf("Pontos Turisticos: %d\n", carta->pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta->densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n\n", carta->pib_per_capita);
}


int main() {
    // Cartas pré-definidas
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "SP001");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.1;
    carta1.pib = 763.8; // em bilhões
    carta1.pontos_turisticos = 150;
    calcularAtributosDerivados(&carta1);

    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "RJ001");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1255.0;
    carta2.pib = 370.0; // em bilhões
    carta2.pontos_turisticos = 120;
    calcularAtributosDerivados(&carta2);

    int escolha_atributo;

    printf("--- Detalhes das Cartas ---\n");
    printf("Carta 1 (%s):\n", carta1.nome_cidade);
    exibirCarta(&carta1);
    printf("Carta 2 (%s):\n", carta2.nome_cidade);
    exibirCarta(&carta2);

    printf("--- Escolha o Atributo para Comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &escolha_atributo);

    printf("\n--- Resultado da Comparacao ---\n");

    switch (escolha_atributo) {
        case 1: // Populacao (maior vence)
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s (%s): %d\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
            printf("Carta 2 - %s (%s): %d\n", carta2.nome_cidade, carta2.estado, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: Carta 1 (%s)\n", carta1.nome_cidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: Carta 2 (%s)\n", carta2.nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Area (maior vence)
            printf("Atributo: Area\n");
            printf("Carta 1 - %s (%s): %.2f km2\n", carta1.nome_cidade, carta1.estado, carta1.area);
            printf("Carta 2 - %s (%s): %.2f km2\n", carta2.nome_cidade, carta2.estado, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: Carta 1 (%s)\n", carta1.nome_cidade);
            } else if (carta2.area > carta1.area) {
                printf("Vencedor: Carta 2 (%s)\n", carta2.nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB (maior vence)
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.2f bilhoes\n", carta1.nome_cidade, carta1.estado, carta1.pib);
            printf("Carta 2 - %s (%s): %.2f bilhoes\n", carta2.nome_cidade, carta2.estado, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: Carta 1 (%s)\n", carta1.nome_cidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedor: Carta 2 (%s)\n", carta2.nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Pontos Turisticos (maior vence)
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 - %s (%s): %d\n", carta1.nome_cidade, carta1.estado, carta1.pontos_turisticos);
            printf("Carta 2 - %s (%s): %d\n", carta2.nome_cidade, carta2.estado, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Vencedor: Carta 1 (%s)\n", carta1.nome_cidade);
            } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                printf("Vencedor: Carta 2 (%s)\n", carta2.nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade Populacional (menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s (%s): %.2f hab/km2\n", carta1.nome_cidade, carta1.estado, carta1.densidade_populacional);
            printf("Carta 2 - %s (%s): %.2f hab/km2\n", carta2.nome_cidade, carta2.estado, carta2.densidade_populacional);
            if (carta1.densidade_populacional < carta2.densidade_populacional) {
                printf("Vencedor: Carta 1 (%s)\n", carta1.nome_cidade);
            } else if (carta2.densidade_populacional < carta1.densidade_populacional) {
                printf("Vencedor: Carta 2 (%s)\n", carta2.nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        case 6: // PIB per Capita (maior vence)
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.nome_cidade, carta1.estado, carta1.pib_per_capita);
            printf("Carta 2 - %s (%s): R$ %.2f\n", carta2.nome_cidade, carta2.estado, carta2.pib_per_capita);
            if (carta1.pib_per_capita > carta2.pib_per_capita) {
                printf("Vencedor: Carta 1 (%s)\n", carta1.nome_cidade);
            } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
                printf("Vencedor: Carta 2 (%s)\n", carta2.nome_cidade);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha um numero entre 1 e 6.\n");
            break;
    }

    return 0;
}

#include <stdio.h>
#include <string.h> // Para usar strcpy

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[3]; // Ex: "SP"
    char codigo_carta[10]; // Ex: "CARTA001"
    char nome_cidade[50];
    int populacao;
    float area; // em km²
    float pib; // em bilhões de Reais
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularAtributosDerivados(Carta *carta) {
    if (carta->area > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0.0; // Evita divisão por zero
    }

    if (carta->populacao > 0) {
        carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao; // PIB em Reais, não bilhões
    } else {
        carta->pib_per_capita = 0.0; // Evita divisão por zero
    }
}

// Função para exibir os detalhes de uma carta
void exibirCarta(const Carta *carta) {
    printf("Estado: %s\n", carta->estado);
    printf("Nome da Cidade: %s\n", carta->nome_cidade);
    printf("Populacao: %d\n", carta->populacao);
    printf("Area: %.2f km2\n", carta->area);
    printf("PIB: %.2f bilhoes\n", carta->pib);
    printf("Pontos Turisticos: %d\n", carta->pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta->densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n\n", carta->pib_per_capita);
}

// Função para obter o valor de um atributo específico de uma carta
// Retorna um float para cobrir todos os tipos numéricos
float getAtributoValor(const Carta *carta, int atributo_choice) {
    switch (atributo_choice) {
        case 1: return (float)carta->populacao;
        case 2: return carta->area;
        case 3: return carta->pib;
        case 4: return (float)carta->pontos_turisticos;
        case 5: return carta->densidade_populacional;
        case 6: return carta->pib_per_capita;
        default: return 0.0; // Erro ou opção inválida
    }
}

// Função para obter o nome do atributo
const char* getNomeAtributo(int atributo_choice) {
    switch (atributo_choice) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per Capita";
        default: return "Desconhecido";
    }
}

int main() {
    // Cartas pré-definidas
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo_carta, "SP001");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.1;
    carta1.pib = 763.8; // em bilhões
    carta1.pontos_turisticos = 150;
    calcularAtributosDerivados(&carta1);

    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo_carta, "RJ001");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1255.0;
    carta2.pib = 370.0; // em bilhões
    carta2.pontos_turisticos = 120;
    calcularAtributosDerivados(&carta2);

    int escolha_atributo1, escolha_atributo2;
    float soma_carta1 = 0.0;
    float soma_carta2 = 0.0;

    printf("--- Detalhes das Cartas ---\n");
    printf("Carta 1 (%s):\n", carta1.nome_cidade);
    exibirCarta(&carta1);
    printf("Carta 2 (%s):\n", carta2.nome_cidade);
    exibirCarta(&carta2);

    // Escolha do primeiro atributo
    do {
        printf("--- Escolha o PRIMEIRO Atributo para Comparacao ---\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("Digite o numero do atributo: ");
        scanf("%d", &escolha_atributo1);

        if (escolha_atributo1 < 1 || escolha_atributo1 > 6) {
            printf("Opcao invalida. Por favor, escolha um numero entre 1 e 6.\n");
        }
    } while (escolha_atributo1 < 1 || escolha_atributo1 > 6);

    // Escolha do segundo atributo (dinâmico)
    do {
        printf("\n--- Escolha o SEGUNDO Atributo para Comparacao ---\n");
        printf("Atributos disponiveis:\n");
        for (int i = 1; i <= 6; i++) {
            if (i != escolha_atributo1) {
                printf("%d. %s\n", i, getNomeAtributo(i));
            }
        }
        printf("Digite o numero do atributo: ");
        scanf("%d", &escolha_atributo2);

        if (escolha_atributo2 < 1 || escolha_atributo2 > 6 || escolha_atributo2 == escolha_atributo1) {
            printf("Opcao invalida ou atributo ja escolhido. Por favor, selecione outro atributo.\n");
        }
    } while (escolha_atributo2 < 1 || escolha_atributo2 > 6 || escolha_atributo2 == escolha_atributo1);

    printf("\n--- Resultado da Comparacao ---\n");
    printf("Atributo 1: %s\n", getNomeAtributo(escolha_atributo1));
    printf("Atributo 2: %s\n", getNomeAtributo(escolha_atributo2));

    // Comparação do primeiro atributo
    float valor1_attr1 = getAtributoValor(&carta1, escolha_atributo1);
    float valor2_attr1 = getAtributoValor(&carta2, escolha_atributo1);
    
    // Regra de inversão para Densidade Populacional (Operador Ternário)
    int vencedor_attr1 = (escolha_atributo1 == 5) ?
                         ((valor1_attr1 < valor2_attr1) ? 1 : (valor2_attr1 < valor1_attr1 ? 2 : 0)) : // Menor vence
                         ((valor1_attr1 > valor2_attr1) ? 1 : (valor2_attr1 > valor1_attr1 ? 2 : 0)); // Maior vence

    printf("\nComparacao do Atributo 1 (%s):\n", getNomeAtributo(escolha_atributo1));
    printf("Carta 1 (%s): %.2f\n", carta1.nome_cidade, valor1_attr1);
    printf("Carta 2 (%s): %.2f\n", carta2.nome_cidade, valor2_attr1);

    if (vencedor_attr1 == 1) {
        printf("Carta 1 (%s) tem vantagem no atributo %s.\n", carta1.nome_cidade, getNomeAtributo(escolha_atributo1));
        soma_carta1 += 1.0; // Adiciona um ponto para a soma geral
    } else if (vencedor_attr1 == 2) {
        printf("Carta 2 (%s) tem vantagem no atributo %s.\n", carta2.nome_cidade, getNomeAtributo(escolha_atributo1));
        soma_carta2 += 1.0;
    } else {
        printf("Empate no atributo %s.\n", getNomeAtributo(escolha_atributo1));
    }


    // Comparação do segundo atributo
    float valor1_attr2 = getAtributoValor(&carta1, escolha_atributo2);
    float valor2_attr2 = getAtributoValor(&carta2, escolha_atributo2);

    // Regra de inversão para Densidade Populacional (Operador Ternário)
    int vencedor_attr2 = (escolha_atributo2 == 5) ?
                         ((valor1_attr2 < valor2_attr2) ? 1 : (valor2_attr2 < valor1_attr2 ? 2 : 0)) : // Menor vence
                         ((valor1_attr2 > valor2_attr2) ? 1 : (valor2_attr2 > valor1_attr2 ? 2 : 0)); // Maior vence

    printf("\nComparacao do Atributo 2 (%s):\n", getNomeAtributo(escolha_atributo2));
    printf("Carta 1 (%s): %.2f\n", carta1.nome_cidade, valor1_attr2);
    printf("Carta 2 (%s): %.2f\n", carta2.nome_cidade, valor2_attr2);

    if (vencedor_attr2 == 1) {
        printf("Carta 1 (%s) tem vantagem no atributo %s.\n", carta1.nome_cidade, getNomeAtributo(escolha_atributo2));
        soma_carta1 += 1.0;
    } else if (vencedor_attr2 == 2) {
        printf("Carta 2 (%s) tem vantagem no atributo %s.\n", carta2.nome_cidade, getNomeAtributo(escolha_atributo2));
        soma_carta2 += 1.0;
    } else {
        printf("Empate no atributo %s.\n", getNomeAtributo(escolha_atributo2));
    }

    printf("\n--- Resultado Final ---\n");
    printf("Soma de pontos da Carta 1 (%s): %.2f\n", carta1.nome_cidade, soma_carta1);
    printf("Soma de pontos da Carta 2 (%s): %.2f\n", carta2.nome_cidade, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("VENCEDOR GERAL: Carta 1 (%s)!\n", carta1.nome_cidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("VENCEDOR GERAL: Carta 2 (%s)!\n", carta2.nome_cidade);
    } else {
        printf("EMPATE GERAL!\n");
    }

    return 0;
}
