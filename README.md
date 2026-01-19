# Soluções para Exercícios de Programação Estruturada em C



Este repositório contém soluções em C99 para os exercícios das listas do pdf **"Lista de Exercicios - Programação Estruturada"**, que aborda conceitos fundamentais de programação estruturada, como entrada/saída, estruturas condicionais, repetição, vetores, matrizes e manipulação de dados.



## Conteúdo das Listas de Exercícios



### **Lista 1** – Fundamentos e Operações Básicas

- Soma de números

- Cálculo de média

- Manipulação de valores inteiros

- Conversão de unidades

- Condicionais simples e compostas



### **Lista 2** – Estruturas de Repetição e Controle

- Menor valor de um conjunto

- Soma de ímpares em intervalo

- Tabuada, fatorial e sequência de Fibonacci

- Análise de dados com finalizador (`-1`, `"fim"`, etc.)



### **Lista 3** – Vetores

- Operações básicas com vetores

- Intercalação, busca, remoção de duplicatas

- Substituição, inversão e ordenação



### **Lista 4** – Matrizes

- Soma, multiplicação e produto de matrizes

- Busca de elementos

- Cálculo de diagonais e transposição

- Aplicação prática: loteria esportiva



## Tecnologias Utilizadas



- Linguagem: **C99**

- Compilador recomendado: `gcc`

- Ambiente de desenvolvimento: Dev C++



## Como Compilar e Executar



Cada solução é um arquivo `.c` independente. Para compilar (exemplo com q1.c):



```bash

gcc -o saida solucoes/q1.c

./saida

```



Ou, de forma genérica:



```bash

gcc -o programa arquivo.c

./programa

```



## Considerações sobre as Soluções



- Todas as soluções foram implementadas em **C99**.

- O código segue boas práticas de legibilidade e modularidade.

- Entrada e saída são realizadas via console (`stdio.h`).

- Validações básicas de entrada foram incluídas quando pertinente.

- Os exercícios envolvendo finalizadores (`0`, `-1`, `"fim"`) foram tratados com estruturas de repetição adequadas.



## Observações



1. O arquivo original da lista de exercícios está disponível na pasta `pdfs/`. As soluções estão organizadas por lista e número da questão na pasta `solucoes/`.
2. O padrão de nomenclatura, adotado com frequência nas soluções, é `q_l_i.c`, em que `l` é a lista e `i` o  número da questão (ex: q2_3.c = questão 3 da lista 2).



## Licença



Este repositório é destinado a fins educacionais. Sinta-se à vontade para usar, modificar e distribuir as soluções, desde que mencionada a fonte.

