# 📄 Teoria.pdf — Documento de Respostas Teóricas

**Curso:** Licenciatura em Informática  
**Disciplina:** Estrutura de Dados e Algoritmos  
**Instituição:** Universidade Licungo — Moçambique


 Sobre este Documento

O ficheiro **`Teoria.pdf`** contém todas as **respostas teóricas** às questões da ficha de exercícios da disciplina de Estrutura de Dados e Algoritmos. Este documento complementa os ficheiros de código do repositório, fornecendo as explicações conceptuais e teóricas exigidas.



 Conteúdo das Respostas Teóricas

O documento cobre os seguintes temas da ficha de exercícios:



 1. Structs em C

Respostas e explicações sobre:
- Criação de `struct Aluno` com campos: nome, idade e média
- Uso de `typedef` para simplificar declarações
- Leitura e impressão de dados com structs
- Funções que recebem structs como parâmetro
- Vetores de structs (`struct Produto`)
- Ordenação de vetores de structs

---

### 2. Algoritmos de Busca

Explicações teóricas e implementações comentadas sobre:
- **Busca Linear** — funcionamento, implementação e contagem de comparações
- **Busca Binária Iterativa** — pré-requisito de vetor ordenado, funcionamento passo a passo
- **Busca Binária Recursiva** — versão recursiva com análise da pilha de chamadas
- **Por que a busca binária não se aplica a vetores não ordenados** — resposta à questão 11
- **Comparação Linear vs Binária** — contagem de passos para vetores de 10 e 1000 elementos

---

### 3. Análise de Complexidade

Resolução detalhada das questões 13 e 16:

#### Questão 13 — Determinação de Complexidade

| Trecho de Código | Complexidade | Justificação |
|-----------------|:------------:|-------------|
| Loop simples `for i < n` | **O(n)** | Executa `n` iterações |
| Loop duplo aninhado `for i,j < n` | **O(n²)** | `n × n` iterações |
| Loop com `i *= 2` | **O(log n)** | Dobra a cada iteração |

#### Questão 16 — Melhor, Médio e Pior Caso

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso |
|-----------|:-----------:|:----------:|:---------:|
| Busca Linear | O(1) — elemento na 1ª posição | O(n/2) ≈ O(n) | O(n) — elemento no fim ou ausente |
| Busca Binária | O(1) — elemento no meio | O(log n) | O(log n) |

---

### 4. Ordenação (Sorting)

Respostas teóricas sobre:
- Implementação e análise do **Bubble Sort**
- Versão otimizada com flag de interrupção
- Comparação de complexidade: Bubble Sort vs Selection Sort vs Insertion Sort
- Programa com geração de vetor aleatório, ordenação com dois algoritmos e contagem de trocas

---

### 5. Sistema de Gestão de Alunos

Descrição da solução para a questão 21:
- Armazenamento de dados de alunos com struct
- Busca por nome (busca linear em campo string)
- Ordenação por média
- Identificação do aluno com melhor desempenho

---

## 🗂️ Relação entre Teoria.pdf e os Ficheiros de Código

| Ficheiro | Questões Relacionadas |
|----------|----------------------|
| `bubble_sort.c` | Q17, Q19, Q20 |
| `bubble_sort_otimizado.c` | Q18, Q19 |
| `main.c` | Q3, Q7, Q9, Q12, Q20, Q21 |
| `Teoria.pdf` | Q11, Q13, Q16, Q19 (análise teórica) |

 Nota

As respostas contidas no `Teoria.pdf` são originais, elaboradas pelos elementos do grupo com base nos conteúdos leccionados nas aulas e na bibliografia recomendada da disciplina.

