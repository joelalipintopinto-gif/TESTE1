Exercicio 1

#include <stdio.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    // Declaração da variável
    struct Aluno a1;

    // Atribuição de valores
    sprintf(a1.nome, "João");
    a1.idade = 20;
    a1.media = 15.5;

    // Impressão dos dados
    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("Média: %.2f\n", a1.media);

    return 0;



  Exercicio 2

    #include <stdio.h>

// Definição com typedef
typedef struct {
    char nome[50];
    int idade;
    float media;
} Aluno;

int main() {
    // Criação de 3 variáveis do tipo Aluno
    Aluno a1, a2, a3;

    // Exemplo de preenchimento (opcional)
    printf("Aluno 1 - Nome: ");
    scanf(" %[^\n]", a1.nome);
    printf("Idade: ");
    scanf("%d", &a1.idade);
    printf("Média: ");
    scanf("%f", &a1.media);

    printf("\nAluno 2 - Nome: ");
    scanf(" %[^\n]", a2.nome);
    printf("Idade: ");
    scanf("%d", &a2.idade);
    printf("Média: ");
    scanf("%f", &a2.media);

    printf("\nAluno 3 - Nome: ");
    scanf(" %[^\n]", a3.nome);
    printf("Idade: ");
    scanf("%d", &a3.idade);
    printf("Média: ");
    scanf("%f", &a3.media);

    // Impressão simples
    printf("\n=== DADOS DOS ALUNOS ===\n");

    printf("\n%s - %d anos - %.2f\n", a1.nome, a1.idade, a1.media);
    printf("%s - %d anos - %.2f\n", a2.nome, a2.idade, a2.media);
    printf("%s - %d anos - %.2f\n", a3.nome, a3.idade, a3.media);

    return 0;
}
}

Exercicio 3

#include <stdio.h>

// Estrutura do aluno
struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    struct Aluno alunos[5];

    // Leitura dos dados
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }

    // Impressão dos dados
    printf("\n=== LISTA DE ALUNOS ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Média: %.2f\n", alunos[i].media);
    }

    return 0;
}

Exercicio 5

#include <stdio.h>

// Estrutura Produto
struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    int n;
    float totalEstoque = 0;

    printf("Quantos produtos deseja inserir? ");
    scanf("%d", &n);

    struct Produto produtos[n];

    // Entrada de dados
    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
    }

    // Cálculo do valor total do estoque
    printf("\n=== VALOR DO ESTOQUE ===\n");

    for (int i = 0; i < n; i++) {
        float valorProduto = produtos[i].preco * produtos[i].quantidade;
        totalEstoque += valorProduto;

        printf("%s -> %.2f\n", produtos[i].nome, valorProduto);
    }

    printf("\nValor total do estoque: %.2f\n", totalEstoque);

    return 0;
}


Exercicio 6

#include <stdio.h>
#include <string.h>

// Estrutura do aluno
struct Aluno {
    char nome[50];
    float media;
};

// Função para ordenar por média (ordem crescente)
void ordenar(struct Aluno v[], int n) {
    struct Aluno temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j].media > v[j + 1].media) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// Função para mostrar alunos
void mostrar(struct Aluno v[], int n) {
    printf("\nAlunos ordenados por média (crescente):\n");

    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", v[i].nome, v[i].media);
    }
}

int main() {
    int n;

    printf("Quantos alunos deseja inserir? ");
    scanf("%d", &n);

    struct Aluno alunos[n]; // vetor dinâmico (sem define)

    // Entrada de dados
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }

    // Ordenação
    ordenar(alunos, n);

    // Mostrar resultado
    mostrar(alunos, n);

    return 0;
}

Exercicio 7

#include <stdio.h>

#define TAM 10

// Função de busca linear
int buscaLinear(int v[], int valor) {
    for (int i = 0; i < TAM; i++) {
        if (v[i] == valor) {
            return i; // retorna a posição onde encontrou
        }
    }
    return -1; // não encontrou
}

int main() {
    int v[TAM] = {5, 8, 12, 3, 7, 9, 1, 4, 6, 10};
    int valor, pos;

    printf("Vetor:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\nDigite o valor a procurar: ");
    scanf("%d", &valor);

    pos = buscaLinear(v, valor);

    if (pos != -1) {
        printf("Valor encontrado na posição %d\n", pos);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}

Exercicio 8

#include <stdio.h>

#define TAM 10

// Função de busca linear com contagem de comparações
int buscaLinear(int v[], int valor, int *comparacoes) {
    *comparacoes = 0;

    for (int i = 0; i < TAM; i++) {
        (*comparacoes)++; // conta cada comparação

        if (v[i] == valor) {
            return i; // encontrou
        }
    }

    return -1; // não encontrou
}

int main() {
    int v[TAM] = {5, 8, 12, 3, 7, 9, 1, 4, 6, 10};
    int valor, pos, comparacoes;

    printf("Vetor:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\nDigite o valor a procurar: ");
    scanf("%d", &valor);

    pos = buscaLinear(v, valor, &comparacoes);

    if (pos != -1) {
        printf("Valor encontrado na posição %d\n", pos);
    } else {
        printf("Valor não encontrado\n");
    }

    printf("Número de comparações: %d\n", comparacoes);

    return 0;
}

Exercicio 9

#include <stdio.h>

#define TAM 10

// Função de busca binária (iterativa)
int buscaBinaria(int v[], int valor) {
    int inicio = 0;
    int fim = TAM - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == valor) {
            return meio; // encontrou
        } 
        else if (v[meio] < valor) {
            inicio = meio + 1; // busca na direita
        } 
        else {
            fim = meio - 1; // busca na esquerda
        }
    }

    return -1; // não encontrou
}

int main() {
    // IMPORTANTE: vetor deve estar ordenado
    int v[TAM] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 12};
    int valor, pos;

    printf("Vetor ordenado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\nDigite o valor a procurar: ");
    scanf("%d", &valor);

    pos = buscaBinaria(v, valor);

    if (pos != -1) {
        printf("Valor encontrado na posição %d\n", pos);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}

Exercicio 10

#include <stdio.h>

#define TAM 10

// Função recursiva de busca binária
int buscaBinariaRec(int v[], int inicio, int fim, int valor) {
    if (inicio > fim) {
        return -1; // não encontrou
    }

    int meio = (inicio + fim) / 2;

    if (v[meio] == valor) {
        return meio; // encontrou
    }
    else if (v[meio] < valor) {
        return buscaBinariaRec(v, meio + 1, fim, valor); // direita
    }
    else {
        return buscaBinariaRec(v, inicio, meio - 1, valor); // esquerda
    }
}

int main() {
    // IMPORTANTE: vetor deve estar ordenado
    int v[TAM] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 12};
    int valor, pos;

    printf("Vetor ordenado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\nDigite o valor a procurar: ");
    scanf("%d", &valor);

    pos = buscaBinariaRec(v, 0, TAM - 1, valor);

    if (pos != -1) {
        printf("Valor encontrado na posição %d\n", pos);
    } else {
        printf("Valor não encontrado\n");
    }

    return 0;
}

Exercicio 11

#include <stdio.h>

/* EXERCÍCIO 11 - Por que busca binária não funciona em vetor não ordenado */

int main() {
    printf("=== EXPLICAÇÃO ===\n\n");
    printf("A busca binária exige que o vetor esteja ORDENADO.\n\n");
    printf("Motivo:\n");
    printf("  A busca binária divide o vetor ao meio e decide\n");
    printf("  em qual metade o elemento está, comparando com\n");
    printf("  o elemento do meio.\n\n");
    printf("  Num vetor NÃO ordenado, essa lógica falha:\n");
    printf("  - Se v[meio] < chave, não garante que a chave\n");
    printf("    esteja na metade direita.\n");
    printf("  - O algoritmo descartaria metades onde o\n");
    printf("    elemento poderia existir.\n\n");
    printf("SOLUÇÃO: Ordenar o vetor antes de aplicar\n");
    printf("a busca binária.\n");

    return 0;
}

Exercicio 12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Busca linear com contagem
int buscaLinear(int v[], int n, int valor, int *comp) {
    *comp = 0;

    for (int i = 0; i < n; i++) {
        (*comp)++;
        if (v[i] == valor) {
            return i;
        }
    }
    return -1;
}

// Busca binária com contagem
int buscaBinaria(int v[], int n, int valor, int *comp) {
    int inicio = 0, fim = n - 1;
    *comp = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        (*comp)++;

        if (v[meio] == valor) return meio;
        else if (v[meio] < valor) inicio = meio + 1;
        else fim = meio - 1;
    }

    return -1;
}

// Preenche vetor ordenado
void gerarOrdenado(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = i * 2; // valores ordenados
    }
}

// Embaralha vetor (para busca linear)
void embaralhar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    srand(time(NULL));

    int compL, compB;
    int valor;

    // ===== Vetor pequeno =====
    int v10[10];
    gerarOrdenado(v10, 10);
    embaralhar(v10, 10);

    valor = v10[rand() % 10]; // valor garantido existir

    buscaLinear(v10, 10, valor, &compL);

    gerarOrdenado(v10, 10); // precisa estar ordenado
    buscaBinaria(v10, 10, valor, &compB);

    printf("=== Vetor pequeno (10 elementos) ===\n");
    printf("Comparações (Linear): %d\n", compL);
    printf("Comparações (Binária): %d\n\n", compB);

    // ===== Vetor grande =====
    int v1000[1000];
    gerarOrdenado(v1000, 1000);
    embaralhar(v1000, 1000);

    valor = v1000[rand() % 1000];

    buscaLinear(v1000, 1000, valor, &compL);

    gerarOrdenado(v1000, 1000);
    buscaBinaria(v1000, 1000, valor, &compB);

    printf("=== Vetor grande (1000 elementos) ===\n");
    printf("Comparações (Linear): %d\n", compL);
    printf("Comparações (Binária): %d\n");

    return 0;
}

Exercicio 13

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Busca linear com contagem
int buscaLinear(int v[], int n, int valor, int *comp) {
    *comp = 0;

    for (int i = 0; i < n; i++) {
        (*comp)++;
        if (v[i] == valor) {
            return i;
        }
    }
    return -1;
}

// Busca binária com contagem
int buscaBinaria(int v[], int n, int valor, int *comp) {
    int inicio = 0, fim = n - 1;
    *comp = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        (*comp)++;

        if (v[meio] == valor) return meio;
        else if (v[meio] < valor) inicio = meio + 1;
        else fim = meio - 1;
    }

    return -1;
}

// Preenche vetor ordenado
void gerarOrdenado(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = i * 2; // valores ordenados
    }
}

// Embaralha vetor (para busca linear)
void embaralhar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    srand(time(NULL));

    int compL, compB;
    int valor;

    // ===== Vetor pequeno =====
    int v10[10];
    gerarOrdenado(v10, 10);
    embaralhar(v10, 10);

    valor = v10[rand() % 10]; // valor garantido existir

    buscaLinear(v10, 10, valor, &compL);

    gerarOrdenado(v10, 10); // precisa estar ordenado
    buscaBinaria(v10, 10, valor, &compB);

    printf("=== Vetor pequeno (10 elementos) ===\n");
    printf("Comparações (Linear): %d\n", compL);
    printf("Comparações (Binária): %d\n\n", compB);

    // ===== Vetor grande =====
    int v1000[1000];
    gerarOrdenado(v1000, 1000);
    embaralhar(v1000, 1000);

    valor = v1000[rand() % 1000];

    buscaLinear(v1000, 1000, valor, &compL);

    gerarOrdenado(v1000, 1000);
    buscaBinaria(v1000, 1000, valor, &compB);

    printf("=== Vetor grande (1000 elementos) ===\n");
    printf("Comparações (Linear): %d\n", compL);
    printf("Comparações (Binária): %d\n");

    return 0;
}

Exercicio 16



• Busca Linear

A busca linear verifica os elementos um por um até encontrar o valor desejado.

Melhor caso → O(1)

O melhor caso acontece quando o elemento está logo na primeira posição do vetor.

Exemplo:

[10, 20, 30, 40]

Se procurarmos o número 10, o algoritmo encontra imediatamente na primeira comparação.

Por isso, a complexidade é:

O(1)


Caso médio → O(n)

O caso médio acontece quando o elemento está em uma posição intermediária.

Exemplo:

[10, 20, 30, 40, 50]

Se procurarmos 30, o algoritmo percorre parte do vetor até encontrar.

Em média, percorre metade dos elementos.

Então a complexidade é:

O(n)


Pior caso → O(n)

O pior caso acontece quando:

o elemento está na última posição, ou

o elemento não existe.


Exemplo:

[10, 20, 30, 40]

Se procurarmos 50, o algoritmo percorre todo o vetor.

Logo:

O(n)


Resumo da Busca Linear

Caso	Complexidade

Melhor caso	O(1)
Caso médio	O(n)
Pior caso	O(n)





• Busca Binária

A busca binária divide o vetor ao meio a cada comparação.

Funciona apenas com vetor ordenado.




Melhor caso → O(1)

O melhor caso acontece quando o elemento está exatamente no meio do vetor.

Exemplo:

[10, 20, 30, 40, 50]

Se procurarmos 30, ele é encontrado imediatamente.

Então:

O(1)



Caso médio → O(log n)

A cada passo, metade do vetor é eliminada.

Exemplo:

16 elementos → 8 → 4 → 2 → 1


O número de divisões cresce de forma logarítmica.

Logo:

O(\log n)


Pior caso → O(log n)

O pior caso acontece quando o elemento está nas últimas divisões ou não existe.

Mesmo assim, o vetor continua sendo dividido pela metade.

Então:

O(\log n)



Resumo da Busca Binária

Caso	Complexidade

Melhor caso	O(1)
Caso médio	O(log n)
Pior caso	O(log n)

Exercicio 19





 Comparação de Complexidade

Algoritmo	Melhor Caso	Caso Médio	Pior Caso

Bubble Sort	   O(n)	     O(n²)	    O(n²)
Selection Sort	O(n²)	  O(n²)	       O(n²)
Insertion Sort	O(n)	   O(n²)	       O(n²)


Explicação dos Casos

Bubble Sort

Melhor caso: vetor já ordenado → O(n)

Caso médio: vetor aleatório → O(n²)

Pior caso: vetor invertido → O(n²)



Selection Sort

Procura sempre o menor elemento em todo o vetor.

Faz o mesmo número de comparações em qualquer situação.


Melhor, médio e pior caso:

O(n²)



Insertion Sort

Muito eficiente para vetores quase ordenados.


Casos:

Melhor caso: vetor já ordenado → O(n)

Caso médio: vetor aleatório → O(n²)

Pior caso: vetor invertido → O(n²)


Conclusão

Bubble Sort: simples, mas faz muitas trocas.

Selection Sort: menos trocas, porém muitas comparações.

Insertion Sort: melhor desempenho em vetores pequenos ou quase ordenados.


  
  Exercicio 20

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// Função para gerar vetor aleatório
void gerarVetor(int v[]) {
    for (int i = 0; i < TAM; i++) {
        v[i] = rand() % 100; // números de 0 a 99
    }
}

// Função para mostrar vetor
void mostrarVetor(int v[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Bubble Sort (conta trocas)
int bubbleSort(int v[]) {
    int trocas = 0;

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                // troca
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocas++;
            }
        }
    }

    return trocas;
}

// Selection Sort (conta trocas)
int selectionSort(int v[]) {
    int trocas = 0;

    for (int i = 0; i < TAM - 1; i++) {
        int min = i;

        for (int j = i + 1; j < TAM; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;
            trocas++;
        }
    }

    return trocas;
}

int main() {
    int v1[TAM], v2[TAM];

    srand(time(NULL));

    gerarVetor(v1);

    // copiar vetor para usar dois algoritmos
    for (int i = 0; i < TAM; i++) {
        v2[i] = v1[i];
    }

    printf("Vetor original:\n");
    mostrarVetor(v1);

    int trocasBubble = bubbleSort(v1);
    printf("\nBubble Sort:\n");
    mostrarVetor(v1);
    printf("Número de trocas: %d\n", trocasBubble);

    int trocasSelection = selectionSort(v2);
    printf("\nSelection Sort:\n");
    mostrarVetor(v2);
    printf("Número de trocas: %d\n", trocasSelection);

    return 0;
}


Exercicio 21

#include <stdio.h>
#include <string.h>

#define MAX 100

// Estrutura do aluno
struct Aluno {
    char nome[50];
    float media;
};

// Função para cadastrar alunos
void cadastrar(struct Aluno alunos[], int *n) {
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }
}

// Função para buscar aluno por nome
void buscar(struct Aluno alunos[], int n) {
    char nomeBusca[50];
    int encontrado = 0;

    printf("\nDigite o nome para buscar: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < n; i++) {
        if (strcmp(alunos[i].nome, nomeBusca) == 0) {
            printf("Aluno encontrado: %s - Média: %.2f\n",
                   alunos[i].nome, alunos[i].media);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Aluno não encontrado.\n");
    }
}

// Função para ordenar por média (Bubble Sort)
void ordenar(struct Aluno alunos[], int n) {
    struct Aluno temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (alunos[j].media < alunos[j + 1].media) {
                temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }

    printf("\nAlunos ordenados por média:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", alunos[i].nome, alunos[i].media);
    }
}

// Função para mostrar o melhor aluno
void melhorAluno(struct Aluno alunos[], int n) {
    int melhor = 0;

    for (int i = 1; i < n; i++) {
        if (alunos[i].media > alunos[melhor].media) {
            melhor = i;
        }
    }

    printf("\nMelhor aluno:\n");
    printf("%s - Média: %.2f\n", alunos[melhor].nome, alunos[melhor].media);
}

// Função principal
int main() {
    struct Aluno alunos[MAX];
    int n = 0, opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Cadastrar alunos\n");
        printf("2. Buscar aluno por nome\n");
        printf("3. Ordenar por média\n");
        printf("4. Mostrar melhor aluno\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(alunos, &n);
                break;
            case 2:
                buscar(alunos, n);
                break;
            case 3:
                ordenar(alunos, n);
                break;
            case 4:
                melhorAluno(alunos, n);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}


  






