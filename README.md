# Code Practice

Espaço dedicado ao estudo e fortalecimento da minha base na linguagem C. 

O objetivo principal deste repositório é praticar lógica, entender o funcionamento interno de memória e ponteiros e basicamente para manter os estudos e reforçar os meus conhecimentos. 

A maior parte dos exercícios e desafios aqui resolvidos são baseados na biblioteca de problemas do **Alone in the Dark (42)**.

---

## 📂 Detalhamento da Estrutura

Os exercícios estão categorizados por temas fundamentais da linguagem C para facilitar revisões futuras:

```text
coding-practice/
├── 01_basico/
├── 02_ponteiros/
├── 03_strings/
├── 04_memoria/
└── 05_projetos/
```

---

### 📂 `01_basico/` — Sintaxe, Fluxo de Controle & I/O
**Objetivo:** Consolidar a base da linguagem, controle de fluxo e manipulação de entrada/saída de baixo nível.
* **Conceitos chave:** Declaração de variáveis, tipos primitivos (`int`, `char`), operadores aritméticos e lógicos, estruturas de repetição (`while`, `for`) e condicionais (`if`, `else`).
* **Exercícios Feitos:**
  * `aff_a`: Recebe uma string e imprime `"a"` seguido de `\n` se a letra existir ou se o número de parâmetros for diferente de 1, caso contrario imprime somente `\n`.
  
---

### 📂 `02_ponteiros/` — Endereços de Memória & Referência
**Objetivo:** Dominar a manipulação direta de endereços de memória e alteração de variáveis por referência.
* **Conceitos chave:** Operadores de endereço (`&`) e desreferenciação (`*`), ponteiros múltiplos (`int **`, `char ***`), escopo de variáveis e passagem de parâmetros por referência.
* **Habilidade prática:** Entender como a memória RAM armazena endereços e modificar valores fora do escopo local da função.

---

### 📂 `03_strings/` — Vetores, ASCII & Manipulação de Texto
**Objetivo:** Compreender a estrutura interna de strings em C como arrays de `char` terminados em `\0`.
* **Conceitos chave:** Tabelas ASCII, iteração através de ponteiros/índices, comparação e cópia manual de buffers de texto.
* **Habilidade prática:** Recriação manual das funções clássicas do cabeçalho `<string.h>` e algoritmos de busca/comparação de caracteres.

---

### 📂 `04_memoria/` — Alocação Dinâmica (Heap) & Parsing
**Objetivo:** Gerenciar a memória Heap de forma consciente e converter tipos de dados complexos.
* **Conceitos chave:** Alocação com `malloc`, liberação com `free`, detecção e prevenção de *memory leaks* e *segfaults*, tratamento de argumentos de linha de comando (`argc`, `argv`).
* **Habilidade prática:** Criar buffers em tempo de execução e construir parsers para conversão entre representações de texto e numéricas.

---

### 📂 `05_projetos/` — Estruturas de Dados, Algoritmos & Recursão
**Objetivo:** Integrar múltiplos conceitos em estruturas complexas e resolução de problemas avançados.
* **Conceitos chave:** Estruturas personalizadas (`struct`), ponteiros auto-referenciados, listas encadeadas simples/duplas (`t_list`), recursão e leitura contínua com buffers estáticos.
* **Habilidade prática:** Manipulação dinâmica de nós de dados e criação de algoritmos de ordenação e interpretação.
