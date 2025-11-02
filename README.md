## ▶️ Como compilar e executar (Nível Aventureiro)

O arquivo `batalhaNaval.c` contém também a implementação do Nível Aventureiro (tabuleiro 10x10 e 4 navios, incluindo dois na diagonal).

1) Compile o código C com `gcc`:

```bash
gcc batalhaNaval.c -o batalhaNaval
```

2) Execute o binário gerado:

```bash
./batalhaNaval
```

3) Saída esperada (exemplo):

```text
Nível Aventureiro - Coordenadas dos Navios

Navio Vertical 1 (tamanho 4):
  Parte 1 -> (X=2, Y=1)
  Parte 2 -> (X=2, Y=2)
  Parte 3 -> (X=2, Y=3)
  Parte 4 -> (X=2, Y=4)

Navio Horizontal 1 (tamanho 3):
  Parte 1 -> (X=5, Y=2)
  Parte 2 -> (X=6, Y=2)
  Parte 3 -> (X=7, Y=2)

Navio Diagonal 1 (tamanho 3):
  Parte 1 -> (X=3, Y=3)
  Parte 2 -> (X=4, Y=4)
  Parte 3 -> (X=5, Y=5)

Navio Diagonal 2 (tamanho 4):
  Parte 1 -> (X=6, Y=0)
  Parte 2 -> (X=7, Y=1)
  Parte 3 -> (X=8, Y=2)
  Parte 4 -> (X=9, Y=3)

Tabuleiro 10x10 (0=vazio,3=ocupado):
0 0 0 0 0 0 3 0 0 0 
0 0 3 0 0 0 0 3 0 0 
0 0 3 0 0 3 3 3 3 0 
0 0 3 3 0 0 0 0 0 3 
0 0 3 0 3 0 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
```

Notas rápidas:
- As posições dos navios estão definidas por variáveis dentro de `batalhaNaval.c` (por exemplo `v1_x`, `v1_y`, `d1_x`, `d1_y`).
- No Nível Aventureiro usamos `3` para indicar posições ocupadas no tabuleiro.
- Você pode editar os valores no código para testar outros posicionamentos e tamanhos.

---

## ▶️ Nível Mestre — Habilidades Especiais

No Nível Mestre, o programa demonstra a aplicação de padrões de habilidades sobre um tabuleiro usando matrizes específicas.

### 🆕 O que é implementado:
- Três padrões/matrizes de habilidade: **cone**, **octaedro** e **cruz** (representados por matrizes 3x5).
- Um tabuleiro 10x10 que recebe as áreas afetadas por cada habilidade. Células afetadas são marcadas com `1`.
- Exibição dos padrões e do tabuleiro final mostrando 0 = não atingido, 1 = atingido.

### Como compilar e executar (Nível Mestre)

1) Compile o código (mesmo arquivo `batalhaNaval.c` contém a implementação do Mestre):

```bash
gcc batalhaNaval.c -o batalhaNaval
```

2) Execute:

```bash
./batalhaNaval
```

3) Saída esperada (exemplo):

```text
Nível Mestre - Padrões e Tabuleiro de Habilidades

Padrão: Cone (3x5)
0 0 1 0 0
0 1 1 1 0
1 1 1 1 1

Padrão: Octaedro (3x5)
0 0 1 0 0
0 1 1 1 0
0 0 1 0 0

Padrão: Cruz (3x5)
0 0 1 0 0
1 1 1 1 1
0 0 1 0 0

Tabuleiro de Habilidades (0=não atingido,1=atingido):
0 0 0 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0
0 0 1 1 1 0 1 0 0 0
0 1 1 1 1 1 1 1 0 0
0 0 0 0 0 0 1 0 1 0
0 0 0 0 0 0 1 1 1 1
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
```

Notas rápidas:
- Os padrões são aplicados com âncoras (posições top-left) definidas no código; altere os offsets para testar outros posicionamentos.
- No tabuleiro mestre, `1` indica área atingida por qualquer habilidade.

---

## 📋 Requisitos Funcionais Comuns
- **Entrada de Dados:** Os valores serão inseridos manualmente por meio de variáveis no código.
- **Utilização de Matrizes:** Os dados devem ser estruturados de maneira eficiente utilizando matrizes.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara e organizada.

## 📌 Requisitos Não Funcionais Comuns
- **Performance:** O sistema deve executar operações de forma eficiente, sem atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado, com comentários claros sobre a função de cada parte do código.
- **Manutenibilidade:** O código deve ser organizado e fácil de entender, facilitando futuras manutenções e expansões.

---

Boa sorte no desenvolvimento deste desafio! Aproveite para aprimorar suas habilidades em vetores e matrizes enquanto progride pelos níveis.

Equipe de Ensino - MateCheck
