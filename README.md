# Padrões de Habilidades (documentação)

Este repositório contém uma demonstração de padrões de habilidade aplicados sobre um tabuleiro (matriz). Os padrões são
representados por pequenas matrizes (3x5) e aplicados como máscaras sobre um tabuleiro 10x10.

Padrões disponíveis:
- cone (3x5)
- octaedro (3x5)
- cruz (3x5)

Cada padrão usa `1` para indicar célula afetada e `0` para célula não afetada. Ao aplicar um padrão sobre o tabuleiro, as
células afetadas são marcadas com `1`.

Como compilar e executar

1) Compile:

```bash
gcc batalhaNaval.c -o batalhaNaval
```

2) Execute:

```bash
./batalhaNaval
```

Exemplo de saída (padrões e tabuleiro de habilidades):

```text
Padrão - cone (3x5):
0 0 1 0 0
0 1 1 1 0
1 1 1 1 1

Padrão - octaedro (3x5):
0 0 1 0 0
0 1 1 1 0
0 0 1 0 0

Padrão - cruz (3x5):
0 0 1 0 0
1 1 1 1 1
0 0 1 0 0

Tabuleiro de habilidades (10x10):
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

Notas:
- Os offsets (posições onde cada padrão é aplicado) estão definidos no código; edite-os para testar outras posições.
- O programa também imprime coordenadas de navios e um tabuleiro 10x10 com marcação de ocupação (0/3) — isso é apenas
uma demonstração adicional.
