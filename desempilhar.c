
int desempilhar() {
  int pino, x;
  printf("Escolha o pino para desempilhar (1, 2 ou 3): ");
  scanf("%d", &pino);
  printf("\n");

  if (pino < 1 || pino > 3) {
    printf("Número inválido. Escolha um pino válido (1, 2 ou 3).\n");
    return desempilhar();
  }

  pino--; // Ajuste para índice de array (1, 2 ou 3) para (0, 1 ou 2)

  if (p[pino].pilha[topo[pino]] == -1) {
    printf("Pino vazio, não é possível desempilhar. Tente novamente.\n");
    return desempilhar();
  }

  x = p[pino].pilha[topo[pino]];
  p[pino].pilha[topo[pino]] = 99;
  topo[pino]--;
  return x;
}
