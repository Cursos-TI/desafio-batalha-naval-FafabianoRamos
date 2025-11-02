## ▶️ Como compilar e executar (Nível Novato)

O arquivo principal que implementa o Nível Novato é `batalhaNaval.c`.

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
Navio Vertical (tamanho 3):
	Parte 1 -> (X=1, Y=0)
	Parte 2 -> (X=1, Y=1)
	Parte 3 -> (X=1, Y=2)

Navio Horizontal (tamanho 4):
	Parte 1 -> (X=0, Y=3)
	Parte 2 -> (X=1, Y=3)
	Parte 3 -> (X=2, Y=3)
	Parte 4 -> (X=3, Y=3)

Tabuleiro (0=vazio,1=vert,2=hor,3=colisao):
0 1 0 0 0 
0 1 0 0 0 
0 1 0 0 0 
2 2 2 2 0 
0 0 0 0 0 
```

Notas rápidas:
- Os valores e posições dos navios são definidos por variáveis dentro de `batalhaNaval.c` (por exemplo `vert_start_x`, `vert_start_y`, `hor_start_x`, `hor_start_y`).
- Códigos no tabuleiro: `0` = vazio, `1` = parte do navio vertical, `2` = parte do navio horizontal, `3` = colisão (sobreposição).
- Próximo passo sugerido: atualizar os valores das variáveis para testar outras posições/tamanhos, ou avançar para o Nível Aventureiro (tabuleiro 10x10, navios diagonais).
