# Logica-Super-Trunfo
 ----

# Projeto Super Trunfo em C

Este repositório contém uma simulação do clássico jogo Super Trunfo, desenvolvido em linguagem C. O projeto foi estruturado em três níveis de complexidade progressiva, demonstrando diferentes conceitos de programação, como estruturas de dados, estruturas de decisão (`if`, `if-else`, `switch`), operadores lógicos e o operador ternário, além de manipulação de menus interativos.

## Níveis do Desafio

O projeto é dividido nos seguintes níveis:

### 🎮 Nível Básico: Comparação Simples de Atributos

Neste nível, o foco é a lógica fundamental de comparação entre duas cartas pré-definidas.

**Funcionalidades:**

  * Cadastro de duas cartas com atributos fixos (Estado, Código da Carta, Nome da Cidade, População, Área, PIB, Número de Pontos Turísticos).
  * Cálculo e exibição da Densidade Populacional (População / Área) e PIB per capita (PIB / População).
  * Comparação de um único atributo (ex: População ou Densidade Populacional) pré-definido no código.
  * Determinação e exibição da carta vencedora baseada na regra: maior valor vence (exceto Densidade Populacional, onde menor valor vence).
  * Uso de estruturas `if` e `if-else`.

**Como compilar e executar (Nível Básico):**

1.  Navegue até o diretório que contém o arquivo `super_trunfo_basico.c` (ou o nome que você usou para o código do nível básico).
2.  Compile o código usando GCC:
    ```bash
    gcc super_trunfo_basico.c -o super_trunfo_basico
    ```
3.  Execute o programa:
    ```bash
    ./super_trunfo_basico
    ```

### 🎮 Nível Intermediário: Menus Interativos e Múltiplos Atributos

Este nível introduz a interação com o usuário através de menus, permitindo a escolha do atributo de comparação.

**Funcionalidades:**

  * Reaproveitamento do cadastro de cartas pré-definidas.
  * **Menu interativo** para o jogador escolher qual atributo será usado para comparar as cartas (População, Área, PIB, Pontos Turísticos, Densidade Populacional, PIB per capita).
  * Implementação da lógica de comparação para o atributo selecionado.
  * Regras de comparação mantidas: maior valor vence (exceto Densidade Populacional, onde menor valor vence).
  * Exibição clara do resultado, incluindo o nome das cidades, o atributo usado e a carta vencedora (ou empate).
  * Uso da estrutura `switch` para o menu.

**Como compilar e executar (Nível Intermediário):**

1.  Navegue até o diretório que contém o arquivo `super_trunfo_intermediario.c` (ou o nome que você usou para o código do nível intermediário).
2.  Compile o código usando GCC:
    ```bash
    gcc super_trunfo_intermediario.c -o super_trunfo_intermediario
    ```
3.  Execute o programa:
    ```bash
    ./super_trunfo_intermediario
    ```

### 🎮 Nível Avançado: Dois Atributos e Lógica Complexa

O nível mais avançado do projeto, introduzindo a comparação baseada em múltiplos atributos e lógica de pontuação.

**Funcionalidades:**

  * Permite ao jogador escolher **dois atributos numéricos diferentes** para a comparação.
  * **Menus dinâmicos** que removem o primeiro atributo escolhido das opções para o segundo.
  * Comparação individual de cada um dos dois atributos selecionados.
  * **Soma dos valores dos atributos** (ou pontos por vitória em cada atributo) para cada carta, determinando o vencedor geral da rodada.
  * Tratamento robusto de empates.
  * Utilização do **operador ternário** para simplificar a lógica de determinação do vencedor por atributo (considerando a regra da Densidade Populacional).
  * Exibição detalhada do resultado, mostrando os dois atributos, seus valores, a soma final e o vencedor.

**Como compilar e executar (Nível Avançado):**

1.  Navegue até o diretório que contém o arquivo `super_trunfo_avancado.c` (ou o nome que você usou para o código do nível avançado).
2.  Compile o código usando GCC:
    ```bash
    gcc super_trunfo_avancado.c -o super_trunfo_avancado
    ```
3.  Execute o programa:
    ```bash
    ./super_trunfo_avancado
    ```

## Estrutura do Código

O código-fonte é organizado da seguinte forma:

  * **`struct Carta`**: Define a estrutura de dados para representar uma carta do Super Trunfo, contendo atributos como nome da cidade, população, área, PIB, pontos turísticos, e os atributos calculados (densidade populacional e PIB per capita).
  * **`calcularAtributosDerivados(Carta *carta)`**: Uma função auxiliar que calcula a densidade populacional e o PIB per capita para uma dada carta, tratando casos de divisão por zero.
  * **`exibirCarta(const Carta *carta)`**: Uma função para imprimir de forma formatada todos os detalhes de uma carta.
  * **`getAtributoValor(const Carta *carta, int atributo_choice)` (Nível Avançado)**: Retorna o valor numérico de um atributo específico de uma carta, facilitando a reutilização de código.
  * **`getNomeAtributo(int atributo_choice)` (Nível Avançado)**: Retorna o nome em string de um atributo com base em sua escolha numérica, para exibição.
  * **`main()`**: A função principal onde a lógica do jogo é executada, incluindo o cadastro das cartas (pré-definido), os menus de seleção (Níveis Intermediário e Avançado) e as comparações.

## Requisitos

  * Compilador C (ex: GCC)
  * Sistema operacional compatível com a execução de binários C.

## Contribuição

Sinta-se à vontade para explorar, modificar e aprimorar este projeto. Sugestões e pull requests são bem-vindos\!

-----
