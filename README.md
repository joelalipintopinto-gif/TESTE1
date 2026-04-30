# Trabalho de Algoritmos de Ordenação
 Integrantes do Grupo

* Joel Ali Viano
* Américo Facitela Penga
* João Filipe João
* Kelven Jossamo
* Letícia Figueira



 Descrição do Trabalho

Este trabalho tem como objetivo implementar e analisar algoritmos de ordenação em linguagem C, com foco no Bubble Sort e sua versão otimizada.



 Algoritmos Implementados

 Bubble Sort

O Bubble Sort é um algoritmo de ordenação simples que compara elementos adjacentes e os troca de posição caso estejam na ordem incorreta.

✔ Funciona percorrendo o vetor várias vezes
✔ A cada passagem, o maior elemento "sobe" para o final


 Bubble Sort Otimizado

Nesta versão, o algoritmo verifica se houve troca durante a execução.

✔ Se não houver trocas, o algoritmo termina antes
✔ Mais eficiente para vetores já ordenados



 Tabela de Complexidade

| Algoritmo      | Melhor Caso | Caso Médio | Pior Caso |
| -------------- | ----------- | ---------- | --------- |
| Bubble Sort    | O(n)        | O(n²)      | O(n²)     |
| Selection Sort | O(n²)       | O(n²)      | O(n²)     |
| Insertion Sort | O(n)        | O(n²)      | O(n²)     |

---

 Conclusão

O Bubble Sort é simples, mas pouco eficiente para grandes volumes de dados. A versão otimizada melhora o desempenho quando o vetor já está ordenado ou quase ordenado.



 Estrutura do Projeto

* bubble_sort.c → Implementação do Bubble Sort
* bubble_sort_otimizado.c → Versão otimizada
* main.c → Programa principal
* README.md → Documentação
* Teoria.pdf → Respostas teóricas
